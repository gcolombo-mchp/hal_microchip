/*
 * Copyright (c) 2026 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef MICROCHIP_COMMON_EIC_PIC32CK_SG_GC_H_
#define MICROCHIP_COMMON_EIC_PIC32CK_SG_GC_H_

/*
 * The PIC32CK EIC HAL defines EIC_CONFIG0 and EIC_CONFIG1 as separate
 * struct members. The EIC driver expects an array member EIC_CONFIG[].
 * Since EIC_CONFIG0 (offset 0x1C) and EIC_CONFIG1 (offset 0x20) are
 * contiguous uint32_t, provide array access via a macro that overrides
 * the struct member syntax: regs->EIC_CONFIG[idx]
 *
 * Trick: #define EIC_CONFIG as EIC_CONFIG0 makes regs->EIC_CONFIG resolve
 * to regs->EIC_CONFIG0, then [idx] indexes from that address since it's
 * treated as a pointer to uint32_t. This works because EIC_CONFIG0 is
 * __IO uint32_t, and &(EIC_CONFIG0)[idx] gives correct pointer arithmetic.
 *
 * Note: This only works because the next member (EIC_CONFIG1) is at the
 * immediately following uint32_t offset.
 */
#define EIC_CONFIG EIC_CONFIG0

#endif /* MICROCHIP_COMMON_EIC_PIC32CK_SG_GC_H_ */
