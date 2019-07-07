#ifndef __mmu_defs_asm_h
#define __mmu_defs_asm_h

/*
 * This file is autogenerated from
 *   file:           ../../inst/mmu/doc/mmu_regs.r
 *     id:           mmu_regs.r,v 1.12 2004/05/06 13:48:45 mikaeln Exp
 *     last modfied: Mon Apr 11 17:03:20 2005
 *
 *   by /n/asic/design/tools/rdesc/src/rdes2c -asm --outfile asm/mmu_defs_asm.h ../../inst/mmu/doc/mmu_regs.r
 *      id: $Id: //BBN_Linux/Branch/Branch_for_SDK_Release_MultiChip_20111013/tclinux_phoenix/linux/include/asm-cris/arch-v32/hwregs/asm/mmu_defs_asm.h#1 $
 * Any changes here will be lost.
 *
 * -*- buffer-read-only: t -*-
 */

#ifndef REG_FIELD
#define REG_FIELD( scope, reg, field, value ) \
  REG_FIELD_X_( value, reg_##scope##_##reg##___##field##___lsb )
#define REG_FIELD_X_( value, shift ) ((value) << shift)
#endif

#ifndef REG_STATE
#define REG_STATE( scope, reg, field, symbolic_value ) \
  REG_STATE_X_( regk_##scope##_##symbolic_value, reg_##scope##_##reg##___##field##___lsb )
#define REG_STATE_X_( k, shift ) (k << shift)
#endif

#ifndef REG_MASK
#define REG_MASK( scope, reg, field ) \
  REG_MASK_X_( reg_##scope##_##reg##___##field##___width, reg_##scope##_##reg##___##field##___lsb )
#define REG_MASK_X_( width, lsb ) (((1 << width)-1) << lsb)
#endif

#ifndef REG_LSB
#define REG_LSB( scope, reg, field ) reg_##scope##_##reg##___##field##___lsb
#endif

#ifndef REG_BIT
#define REG_BIT( scope, reg, field ) reg_##scope##_##reg##___##field##___bit
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) REG_ADDR_X_(inst, reg_##scope##_##reg##_offset)
#define REG_ADDR_X_( inst, offs ) ((inst) + offs)
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
         REG_ADDR_VECT_X_(inst, reg_##scope##_##reg##_offset, index, \
			 STRIDE_##scope##_##reg )
#define REG_ADDR_VECT_X_( inst, offs, index, stride ) \
                          ((inst) + offs + (index) * stride)
#endif

/* Register rw_mm_cfg, scope mmu, type rw */
#define reg_mmu_rw_mm_cfg___seg_0___lsb 0
#define reg_mmu_rw_mm_cfg___seg_0___width 1
#define reg_mmu_rw_mm_cfg___seg_0___bit 0
#define reg_mmu_rw_mm_cfg___seg_1___lsb 1
#define reg_mmu_rw_mm_cfg___seg_1___width 1
#define reg_mmu_rw_mm_cfg___seg_1___bit 1
#define reg_mmu_rw_mm_cfg___seg_2___lsb 2
#define reg_mmu_rw_mm_cfg___seg_2___width 1
#define reg_mmu_rw_mm_cfg___seg_2___bit 2
#define reg_mmu_rw_mm_cfg___seg_3___lsb 3
#define reg_mmu_rw_mm_cfg___seg_3___width 1
#define reg_mmu_rw_mm_cfg___seg_3___bit 3
#define reg_mmu_rw_mm_cfg___seg_4___lsb 4
#define reg_mmu_rw_mm_cfg___seg_4___width 1
#define reg_mmu_rw_mm_cfg___seg_4___bit 4
#define reg_mmu_rw_mm_cfg___seg_5___lsb 5
#define reg_mmu_rw_mm_cfg___seg_5___width 1
#define reg_mmu_rw_mm_cfg___seg_5___bit 5
#define reg_mmu_rw_mm_cfg___seg_6___lsb 6
#define reg_mmu_rw_mm_cfg___seg_6___width 1
#define reg_mmu_rw_mm_cfg___seg_6___bit 6
#define reg_mmu_rw_mm_cfg___seg_7___lsb 7
#define reg_mmu_rw_mm_cfg___seg_7___width 1
#define reg_mmu_rw_mm_cfg___seg_7___bit 7
#define reg_mmu_rw_mm_cfg___seg_8___lsb 8
#define reg_mmu_rw_mm_cfg___seg_8___width 1
#define reg_mmu_rw_mm_cfg___seg_8___bit 8
#define reg_mmu_rw_mm_cfg___seg_9___lsb 9
#define reg_mmu_rw_mm_cfg___seg_9___width 1
#define reg_mmu_rw_mm_cfg___seg_9___bit 9
#define reg_mmu_rw_mm_cfg___seg_a___lsb 10
#define reg_mmu_rw_mm_cfg___seg_a___width 1
#define reg_mmu_rw_mm_cfg___seg_a___bit 10
#define reg_mmu_rw_mm_cfg___seg_b___lsb 11
#define reg_mmu_rw_mm_cfg___seg_b___width 1
#define reg_mmu_rw_mm_cfg___seg_b___bit 11
#define reg_mmu_rw_mm_cfg___seg_c___lsb 12
#define reg_mmu_rw_mm_cfg___seg_c___width 1
#define reg_mmu_rw_mm_cfg___seg_c___bit 12
#define reg_mmu_rw_mm_cfg___seg_d___lsb 13
#define reg_mmu_rw_mm_cfg___seg_d___width 1
#define reg_mmu_rw_mm_cfg___seg_d___bit 13
#define reg_mmu_rw_mm_cfg___seg_e___lsb 14
#define reg_mmu_rw_mm_cfg___seg_e___width 1
#define reg_mmu_rw_mm_cfg___seg_e___bit 14
#define reg_mmu_rw_mm_cfg___seg_f___lsb 15
#define reg_mmu_rw_mm_cfg___seg_f___width 1
#define reg_mmu_rw_mm_cfg___seg_f___bit 15
#define reg_mmu_rw_mm_cfg___inv___lsb 16
#define reg_mmu_rw_mm_cfg___inv___width 1
#define reg_mmu_rw_mm_cfg___inv___bit 16
#define reg_mmu_rw_mm_cfg___ex___lsb 17
#define reg_mmu_rw_mm_cfg___ex___width 1
#define reg_mmu_rw_mm_cfg___ex___bit 17
#define reg_mmu_rw_mm_cfg___acc___lsb 18
#define reg_mmu_rw_mm_cfg___acc___width 1
#define reg_mmu_rw_mm_cfg___acc___bit 18
#define reg_mmu_rw_mm_cfg___we___lsb 19
#define reg_mmu_rw_mm_cfg___we___width 1
#define reg_mmu_rw_mm_cfg___we___bit 19
#define reg_mmu_rw_mm_cfg_offset 0

/* Register rw_mm_kbase_lo, scope mmu, type rw */
#define reg_mmu_rw_mm_kbase_lo___base_0___lsb 0
#define reg_mmu_rw_mm_kbase_lo___base_0___width 4
#define reg_mmu_rw_mm_kbase_lo___base_1___lsb 4
#define reg_mmu_rw_mm_kbase_lo___base_1___width 4
#define reg_mmu_rw_mm_kbase_lo___base_2___lsb 8
#define reg_mmu_rw_mm_kbase_lo___base_2___width 4
#define reg_mmu_rw_mm_kbase_lo___base_3___lsb 12
#define reg_mmu_rw_mm_kbase_lo___base_3___width 4
#define reg_mmu_rw_mm_kbase_lo___base_4___lsb 16
#define reg_mmu_rw_mm_kbase_lo___base_4___width 4
#define reg_mmu_rw_mm_kbase_lo___base_5___lsb 20
#define reg_mmu_rw_mm_kbase_lo___base_5___width 4
#define reg_mmu_rw_mm_kbase_lo___base_6___lsb 24
#define reg_mmu_rw_mm_kbase_lo___base_6___width 4
#define reg_mmu_rw_mm_kbase_lo___base_7___lsb 28
#define reg_mmu_rw_mm_kbase_lo___base_7___width 4
#define reg_mmu_rw_mm_kbase_lo_offset 4

/* Register rw_mm_kbase_hi, scope mmu, type rw */
#define reg_mmu_rw_mm_kbase_hi___base_8___lsb 0
#define reg_mmu_rw_mm_kbase_hi___base_8___width 4
#define reg_mmu_rw_mm_kbase_hi___base_9___lsb 4
#define reg_mmu_rw_mm_kbase_hi___base_9___width 4
#define reg_mmu_rw_mm_kbase_hi___base_a___lsb 8
#define reg_mmu_rw_mm_kbase_hi___base_a___width 4
#define reg_mmu_rw_mm_kbase_hi___base_b___lsb 12
#define reg_mmu_rw_mm_kbase_hi___base_b___width 4
#define reg_mmu_rw_mm_kbase_hi___base_c___lsb 16
#define reg_mmu_rw_mm_kbase_hi___base_c___width 4
#define reg_mmu_rw_mm_kbase_hi___base_d___lsb 20
#define reg_mmu_rw_mm_kbase_hi___base_d___width 4
#define reg_mmu_rw_mm_kbase_hi___base_e___lsb 24
#define reg_mmu_rw_mm_kbase_hi___base_e___width 4
#define reg_mmu_rw_mm_kbase_hi___base_f___lsb 28
#define reg_mmu_rw_mm_kbase_hi___base_f___width 4
#define reg_mmu_rw_mm_kbase_hi_offset 8

/* Register r_mm_cause, scope mmu, type r */
#define reg_mmu_r_mm_cause___pid___lsb 0
#define reg_mmu_r_mm_cause___pid___width 8
#define reg_mmu_r_mm_cause___op___lsb 8
#define reg_mmu_r_mm_cause___op___width 2
#define reg_mmu_r_mm_cause___vpn___lsb 13
#define reg_mmu_r_mm_cause___vpn___width 19
#define reg_mmu_r_mm_cause_offset 12

/* Register rw_mm_tlb_sel, scope mmu, type rw */
#define reg_mmu_rw_mm_tlb_sel___idx___lsb 0
#define reg_mmu_rw_mm_tlb_sel___idx___width 4
#define reg_mmu_rw_mm_tlb_sel___set___lsb 4
#define reg_mmu_rw_mm_tlb_sel___set___width 2
#define reg_mmu_rw_mm_tlb_sel_offset 16

/* Register rw_mm_tlb_lo, scope mmu, type rw */
#define reg_mmu_rw_mm_tlb_lo___x___lsb 0
#define reg_mmu_rw_mm_tlb_lo___x___width 1
#define reg_mmu_rw_mm_tlb_lo___x___bit 0
#define reg_mmu_rw_mm_tlb_lo___w___lsb 1
#define reg_mmu_rw_mm_tlb_lo___w___width 1
#define reg_mmu_rw_mm_tlb_lo___w___bit 1
#define reg_mmu_rw_mm_tlb_lo___k___lsb 2
#define reg_mmu_rw_mm_tlb_lo___k___width 1
#define reg_mmu_rw_mm_tlb_lo___k___bit 2
#define reg_mmu_rw_mm_tlb_lo___v___lsb 3
#define reg_mmu_rw_mm_tlb_lo___v___width 1
#define reg_mmu_rw_mm_tlb_lo___v___bit 3
#define reg_mmu_rw_mm_tlb_lo___g___lsb 4
#define reg_mmu_rw_mm_tlb_lo___g___width 1
#define reg_mmu_rw_mm_tlb_lo___g___bit 4
#define reg_mmu_rw_mm_tlb_lo___pfn___lsb 13
#define reg_mmu_rw_mm_tlb_lo___pfn___width 19
#define reg_mmu_rw_mm_tlb_lo_offset 20

/* Register rw_mm_tlb_hi, scope mmu, type rw */
#define reg_mmu_rw_mm_tlb_hi___pid___lsb 0
#define reg_mmu_rw_mm_tlb_hi___pid___width 8
#define reg_mmu_rw_mm_tlb_hi___vpn___lsb 13
#define reg_mmu_rw_mm_tlb_hi___vpn___width 19
#define reg_mmu_rw_mm_tlb_hi_offset 24


/* Constants */
#define regk_mmu_execute                          0x00000000
#define regk_mmu_flush                            0x00000003
#define regk_mmu_linear                           0x00000001
#define regk_mmu_no                               0x00000000
#define regk_mmu_off                              0x00000000
#define regk_mmu_on                               0x00000001
#define regk_mmu_page                             0x00000000
#define regk_mmu_read                             0x00000001
#define regk_mmu_write                            0x00000002
#define regk_mmu_yes                              0x00000001
#endif /* __mmu_defs_asm_h */
