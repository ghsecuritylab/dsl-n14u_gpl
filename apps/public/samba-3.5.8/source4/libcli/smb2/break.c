/*
   Unix SMB/CIFS implementation.

   SMB2 client oplock break handling

   Copyright (C) Stefan Metzmacher 2008

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "includes.h"
#include "libcli/smb2/smb2.h"
#include "libcli/smb2/smb2_calls.h"

/*
  send a break request
*/
struct smb2_request *smb2_break_send(struct smb2_tree *tree, struct smb2_break *io)
{
	struct smb2_request *req;

	req = smb2_request_init_tree(tree, SMB2_OP_BREAK, 0x18, false, 0);
	if (req == NULL) return NULL;

	SCVAL(req->out.body, 0x02, io->in.oplock_level);
	SCVAL(req->out.body, 0x03, io->in.reserved);
	SIVAL(req->out.body, 0x04, io->in.reserved2);
	smb2_push_handle(req->out.body+0x08, &io->in.file.handle);

	smb2_transport_send(req);

	return req;
}


/*
  recv a break reply
*/
NTSTATUS smb2_break_recv(struct smb2_request *req, struct smb2_break *io)
{
	if (!smb2_request_receive(req) ||
	    !smb2_request_is_ok(req)) {
		return smb2_request_destroy(req);
	}

	SMB2_CHECK_PACKET_RECV(req, 0x18, false);

	io->out.oplock_level	= CVAL(req->in.body, 0x02);
	io->out.reserved	= CVAL(req->in.body, 0x03);
	io->out.reserved2	= IVAL(req->in.body, 0x04);
	smb2_pull_handle(req->in.body+0x08, &io->out.file.handle);

	return smb2_request_destroy(req);
}

/*
  sync flush request
*/
NTSTATUS smb2_break(struct smb2_tree *tree, struct smb2_break *io)
{
	struct smb2_request *req = smb2_break_send(tree, io);
	return smb2_break_recv(req, io);
}
