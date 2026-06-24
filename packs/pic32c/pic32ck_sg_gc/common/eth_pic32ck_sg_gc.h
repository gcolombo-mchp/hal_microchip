/*
 * Copyright (c) 2026 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file eth_pic32ck_sg_gc.h
 * @brief GMAC-to-ETH Register and Bit Mask Mapping for PIC32CK SG/GC family.
 *
 * This file maps the GMAC register names used by Zephyr's eth_sam_gmac.c driver
 * to the ETH register names defined in the PIC32CK SG/GC ATDF-generated HAL
 * headers.  The PIC32CK ETH peripheral is register-compatible with the SAM GMAC
 * but uses a different naming prefix (ETH_ instead of GMAC_) and direct uint32_t
 * members instead of the SAM0 union-of-structs (.reg) access style.
 */

#ifndef MICROCHIP_COMMON_ETH_PIC32CK_SG_GC_H_
#define MICROCHIP_COMMON_ETH_PIC32CK_SG_GC_H_

/* ========================================================================== */
/* Type alias: map Gmac* (used by the driver) to eth_registers_t              */
/* ========================================================================== */
typedef eth_registers_t Gmac;

/* ========================================================================== */
/* Register member name mappings                                              */
/* Usage: gmac->GMAC_NCR expands to gmac->ETH_NCR                            */
/* ========================================================================== */
#define GMAC_NCR        ETH_NCR
#define GMAC_NCFGR      ETH_NCFGR
#define GMAC_NSR        ETH_NSR
#define GMAC_UR         ETH_UR
#define GMAC_DCFGR      ETH_DCFGR
#define GMAC_TSR        ETH_TSR
#define GMAC_RBQB       ETH_RBQB
#define GMAC_TBQB       ETH_TBQB
#define GMAC_RSR        ETH_RSR
#define GMAC_ISR        ETH_ISR
#define GMAC_IER        ETH_IER
#define GMAC_IDR        ETH_IDR
#define GMAC_IMR        ETH_IMR
#define GMAC_MAN        ETH_MAN
#define GMAC_RPQ        ETH_RPQ
#define GMAC_TPQ        ETH_TPQ
#define GMAC_TPSF       ETH_TPSF
#define GMAC_RPSF       ETH_RPSF
#define GMAC_RJFML      ETH_RJFML
#define GMAC_HRB        ETH_HRB
#define GMAC_HRT        ETH_HRT
#define GMAC_WOL        ETH_WOL
#define GMAC_IPGS       ETH_IPGS
#define GMAC_SVLAN      ETH_SVLAN
#define GMAC_TPFCP      ETH_TPFCP
#define GMAC_SAMB1      ETH_SAMB1
#define GMAC_SAMT1      ETH_SAMT1
#define GMAC_NSC        ETH_NSC
#define GMAC_SCL        ETH_SCL
#define GMAC_SCH        ETH_SCH
#define GMAC_EFTSH      ETH_EFTSH
#define GMAC_EFRSH      ETH_EFRSH
#define GMAC_PEFTSH     ETH_PEFTSH
#define GMAC_PEFRSH     ETH_PEFRSH
#define GMAC_OTLO       ETH_OTLO
#define GMAC_OTHI       ETH_OTHI
#define GMAC_FT         ETH_FT
#define GMAC_BCFT       ETH_BCFT
#define GMAC_MFT        ETH_MFT
#define GMAC_PFT        ETH_PFT
#define GMAC_BFT64      ETH_BFT64
#define GMAC_TBFT127    ETH_TBFT127
#define GMAC_TBFT255    ETH_TBFT255
#define GMAC_TBFT511    ETH_TBFT511
#define GMAC_TBFT1023   ETH_TBFT1023
#define GMAC_TBFT1518   ETH_TBFT1518
#define GMAC_GTBFT1518  ETH_GTBFT1518
#define GMAC_TUR        ETH_TUR
#define GMAC_SCF        ETH_SCF
#define GMAC_MCF        ETH_MCF
#define GMAC_EC         ETH_EC
#define GMAC_LC         ETH_LC
#define GMAC_DTF        ETH_DTF
#define GMAC_CSE        ETH_CSE
#define GMAC_ORLO       ETH_ORLO
#define GMAC_ORHI       ETH_ORHI
#define GMAC_FR         ETH_FR
#define GMAC_BCFR       ETH_BCFR
#define GMAC_MFR        ETH_MFR
#define GMAC_PFR        ETH_PFR
#define GMAC_BFR64      ETH_BFR64
#define GMAC_TBFR127    ETH_TBFR127
#define GMAC_TBFR255    ETH_TBFR255
#define GMAC_TBFR511    ETH_TBFR511
#define GMAC_TBFR1023   ETH_TBFR1023
#define GMAC_TBFR1518   ETH_TBFR1518
#define GMAC_TMXBFR     ETH_TMXBFR
#define GMAC_UFR        ETH_UFR
#define GMAC_OFR        ETH_OFR
#define GMAC_JR         ETH_JR
#define GMAC_FCSE       ETH_FCSE
#define GMAC_LFFE       ETH_LFFE
#define GMAC_RSE        ETH_RSE
#define GMAC_AE         ETH_AE
#define GMAC_RRE        ETH_RRE
#define GMAC_ROE        ETH_ROE
#define GMAC_IHCE       ETH_IHCE
#define GMAC_TCE        ETH_TCE
#define GMAC_UCE        ETH_UCE
#define GMAC_TISUBN     ETH_TISUBN
#define GMAC_TSH        ETH_TSH
#define GMAC_TSSSL      ETH_TSSSL
#define GMAC_TSSN       ETH_TSSN
#define GMAC_TSL        ETH_TSL
#define GMAC_TN         ETH_TN
#define GMAC_TA         ETH_TA
#define GMAC_TI         ETH_TI
#define GMAC_EFTSL      ETH_EFTSL
#define GMAC_EFTN       ETH_EFTN
#define GMAC_EFRSL      ETH_EFRSL
#define GMAC_EFRN       ETH_EFRN
#define GMAC_PEFTSL     ETH_PEFTSL
#define GMAC_PEFTN      ETH_PEFTN
#define GMAC_PEFRSL     ETH_PEFRSL
#define GMAC_PEFRN      ETH_PEFRN
#define GMAC_RLPITR     ETH_RLPITR
#define GMAC_RLPITI     ETH_RLPITI
#define GMAC_TLPITR     ETH_TLPITR
#define GMAC_TLPITI     ETH_TLPITI

/* ========================================================================== */
/* Specific Address (SA) array and member mappings                            */
/* ========================================================================== */
#define GMAC_SA         SA
#define GMAC_SAB        ETH_SAB
#define GMAC_SAT        ETH_SAT

/* ========================================================================== */
/* NCR - Network Control Register bit masks and positions                     */
/* ========================================================================== */
#define GMAC_NCR_LBL_Pos         ETH_NCR_LBL_Pos
#define GMAC_NCR_LBL_Msk         ETH_NCR_LBL_Msk
#define GMAC_NCR_LBL             ETH_NCR_LBL_Msk

#define GMAC_NCR_RXEN_Pos        ETH_NCR_RXEN_Pos
#define GMAC_NCR_RXEN_Msk        ETH_NCR_RXEN_Msk
#define GMAC_NCR_RXEN            ETH_NCR_RXEN_Msk

#define GMAC_NCR_TXEN_Pos        ETH_NCR_TXEN_Pos
#define GMAC_NCR_TXEN_Msk        ETH_NCR_TXEN_Msk
#define GMAC_NCR_TXEN            ETH_NCR_TXEN_Msk

#define GMAC_NCR_MPE_Pos         ETH_NCR_MPE_Pos
#define GMAC_NCR_MPE_Msk         ETH_NCR_MPE_Msk
#define GMAC_NCR_MPE             ETH_NCR_MPE_Msk

#define GMAC_NCR_CLRSTAT_Pos     ETH_NCR_CLRSTAT_Pos
#define GMAC_NCR_CLRSTAT_Msk     ETH_NCR_CLRSTAT_Msk
#define GMAC_NCR_CLRSTAT         ETH_NCR_CLRSTAT_Msk

#define GMAC_NCR_INCSTAT_Pos     ETH_NCR_INCSTAT_Pos
#define GMAC_NCR_INCSTAT_Msk     ETH_NCR_INCSTAT_Msk
#define GMAC_NCR_INCSTAT         ETH_NCR_INCSTAT_Msk

#define GMAC_NCR_WESTAT_Pos      ETH_NCR_WESTAT_Pos
#define GMAC_NCR_WESTAT_Msk      ETH_NCR_WESTAT_Msk
#define GMAC_NCR_WESTAT          ETH_NCR_WESTAT_Msk

#define GMAC_NCR_BP_Pos          ETH_NCR_BP_Pos
#define GMAC_NCR_BP_Msk          ETH_NCR_BP_Msk
#define GMAC_NCR_BP              ETH_NCR_BP_Msk

#define GMAC_NCR_TSTART_Pos      ETH_NCR_TSTART_Pos
#define GMAC_NCR_TSTART_Msk      ETH_NCR_TSTART_Msk
#define GMAC_NCR_TSTART          ETH_NCR_TSTART_Msk

#define GMAC_NCR_THALT_Pos       ETH_NCR_THALT_Pos
#define GMAC_NCR_THALT_Msk       ETH_NCR_THALT_Msk
#define GMAC_NCR_THALT           ETH_NCR_THALT_Msk

#define GMAC_NCR_TXPF_Pos        ETH_NCR_TXPF_Pos
#define GMAC_NCR_TXPF_Msk        ETH_NCR_TXPF_Msk
#define GMAC_NCR_TXPF            ETH_NCR_TXPF_Msk

#define GMAC_NCR_TXZQPF_Pos     ETH_NCR_TXZQPF_Pos
#define GMAC_NCR_TXZQPF_Msk     ETH_NCR_TXZQPF_Msk
#define GMAC_NCR_TXZQPF          ETH_NCR_TXZQPF_Msk

#define GMAC_NCR_SRTSM_Pos      ETH_NCR_SRTSM_Pos
#define GMAC_NCR_SRTSM_Msk      ETH_NCR_SRTSM_Msk
#define GMAC_NCR_SRTSM           ETH_NCR_SRTSM_Msk

/* ========================================================================== */
/* NCFGR - Network Configuration Register bit masks and positions             */
/* ========================================================================== */
#define GMAC_NCFGR_SPD_Pos       ETH_NCFGR_SPD_Pos
#define GMAC_NCFGR_SPD_Msk       ETH_NCFGR_SPD_Msk
#define GMAC_NCFGR_SPD           ETH_NCFGR_SPD_Msk

#define GMAC_NCFGR_FD_Pos        ETH_NCFGR_FD_Pos
#define GMAC_NCFGR_FD_Msk        ETH_NCFGR_FD_Msk
#define GMAC_NCFGR_FD            ETH_NCFGR_FD_Msk

#define GMAC_NCFGR_DNVLAN_Pos    ETH_NCFGR_DNVLAN_Pos
#define GMAC_NCFGR_DNVLAN_Msk    ETH_NCFGR_DNVLAN_Msk
#define GMAC_NCFGR_DNVLAN        ETH_NCFGR_DNVLAN_Msk

#define GMAC_NCFGR_JFRAME_Pos    ETH_NCFGR_JFRAME_Pos
#define GMAC_NCFGR_JFRAME_Msk    ETH_NCFGR_JFRAME_Msk
#define GMAC_NCFGR_JFRAME        ETH_NCFGR_JFRAME_Msk

#define GMAC_NCFGR_CAF_Pos       ETH_NCFGR_CAF_Pos
#define GMAC_NCFGR_CAF_Msk       ETH_NCFGR_CAF_Msk
#define GMAC_NCFGR_CAF           ETH_NCFGR_CAF_Msk

#define GMAC_NCFGR_NBC_Pos       ETH_NCFGR_NBC_Pos
#define GMAC_NCFGR_NBC_Msk       ETH_NCFGR_NBC_Msk
#define GMAC_NCFGR_NBC           ETH_NCFGR_NBC_Msk

#define GMAC_NCFGR_MTIHEN_Pos    ETH_NCFGR_MTIHEN_Pos
#define GMAC_NCFGR_MTIHEN_Msk    ETH_NCFGR_MTIHEN_Msk
#define GMAC_NCFGR_MTIHEN        ETH_NCFGR_MTIHEN_Msk

#define GMAC_NCFGR_UNIHEN_Pos    ETH_NCFGR_UNIHEN_Pos
#define GMAC_NCFGR_UNIHEN_Msk    ETH_NCFGR_UNIHEN_Msk
#define GMAC_NCFGR_UNIHEN        ETH_NCFGR_UNIHEN_Msk

#define GMAC_NCFGR_MAXFS_Pos     ETH_NCFGR_MAXFS_Pos
#define GMAC_NCFGR_MAXFS_Msk     ETH_NCFGR_MAXFS_Msk
#define GMAC_NCFGR_MAXFS         ETH_NCFGR_MAXFS_Msk

/* GBE in SAM maps to GIGE in PIC32CK */
#define GMAC_NCFGR_GBE_Pos       ETH_NCFGR_GIGE_Pos
#define GMAC_NCFGR_GBE_Msk       ETH_NCFGR_GIGE_Msk
#define GMAC_NCFGR_GBE           ETH_NCFGR_GIGE_Msk

#define GMAC_NCFGR_RTY_Pos       ETH_NCFGR_RTY_Pos
#define GMAC_NCFGR_RTY_Msk       ETH_NCFGR_RTY_Msk
#define GMAC_NCFGR_RTY           ETH_NCFGR_RTY_Msk

#define GMAC_NCFGR_PEN_Pos       ETH_NCFGR_PEN_Pos
#define GMAC_NCFGR_PEN_Msk       ETH_NCFGR_PEN_Msk
#define GMAC_NCFGR_PEN           ETH_NCFGR_PEN_Msk

#define GMAC_NCFGR_RXBUFO_Pos    ETH_NCFGR_RXBUFO_Pos
#define GMAC_NCFGR_RXBUFO_Msk    ETH_NCFGR_RXBUFO_Msk
#define GMAC_NCFGR_RXBUFO(value) ETH_NCFGR_RXBUFO(value)

#define GMAC_NCFGR_LFERD_Pos     ETH_NCFGR_LFERD_Pos
#define GMAC_NCFGR_LFERD_Msk     ETH_NCFGR_LFERD_Msk
#define GMAC_NCFGR_LFERD         ETH_NCFGR_LFERD_Msk

#define GMAC_NCFGR_RFCS_Pos      ETH_NCFGR_RFCS_Pos
#define GMAC_NCFGR_RFCS_Msk      ETH_NCFGR_RFCS_Msk
#define GMAC_NCFGR_RFCS          ETH_NCFGR_RFCS_Msk

#define GMAC_NCFGR_CLK_Pos       ETH_NCFGR_CLK_Pos
#define GMAC_NCFGR_CLK_Msk       ETH_NCFGR_CLK_Msk
#define GMAC_NCFGR_CLK(value)    ETH_NCFGR_CLK(value)

#define GMAC_NCFGR_DBW_Pos       ETH_NCFGR_DBW_Pos
#define GMAC_NCFGR_DBW_Msk       ETH_NCFGR_DBW_Msk
#define GMAC_NCFGR_DBW(value)    ETH_NCFGR_DBW(value)

#define GMAC_NCFGR_DCPF_Pos      ETH_NCFGR_DCPF_Pos
#define GMAC_NCFGR_DCPF_Msk      ETH_NCFGR_DCPF_Msk
#define GMAC_NCFGR_DCPF          ETH_NCFGR_DCPF_Msk

#define GMAC_NCFGR_RXCOEN_Pos    ETH_NCFGR_RXCOEN_Pos
#define GMAC_NCFGR_RXCOEN_Msk    ETH_NCFGR_RXCOEN_Msk
#define GMAC_NCFGR_RXCOEN        ETH_NCFGR_RXCOEN_Msk

#define GMAC_NCFGR_EFRHD_Pos     ETH_NCFGR_EFRHD_Pos
#define GMAC_NCFGR_EFRHD_Msk     ETH_NCFGR_EFRHD_Msk
#define GMAC_NCFGR_EFRHD         ETH_NCFGR_EFRHD_Msk

#define GMAC_NCFGR_IRXFCS_Pos    ETH_NCFGR_IRXFCS_Pos
#define GMAC_NCFGR_IRXFCS_Msk    ETH_NCFGR_IRXFCS_Msk
#define GMAC_NCFGR_IRXFCS        ETH_NCFGR_IRXFCS_Msk

#define GMAC_NCFGR_IPGSEN_Pos    ETH_NCFGR_IPGSEN_Pos
#define GMAC_NCFGR_IPGSEN_Msk    ETH_NCFGR_IPGSEN_Msk
#define GMAC_NCFGR_IPGSEN        ETH_NCFGR_IPGSEN_Msk

#define GMAC_NCFGR_RXBP_Pos      ETH_NCFGR_RXBP_Pos
#define GMAC_NCFGR_RXBP_Msk      ETH_NCFGR_RXBP_Msk
#define GMAC_NCFGR_RXBP          ETH_NCFGR_RXBP_Msk

#define GMAC_NCFGR_IRXER_Pos     ETH_NCFGR_IRXER_Pos
#define GMAC_NCFGR_IRXER_Msk     ETH_NCFGR_IRXER_Msk
#define GMAC_NCFGR_IRXER         ETH_NCFGR_IRXER_Msk

/* ========================================================================== */
/* NSR - Network Status Register bit masks                                    */
/* ========================================================================== */
#define GMAC_NSR_MDIO_Pos        ETH_NSR_MDIO_Pos
#define GMAC_NSR_MDIO_Msk        ETH_NSR_MDIO_Msk
#define GMAC_NSR_MDIO            ETH_NSR_MDIO_Msk

#define GMAC_NSR_IDLE_Pos        ETH_NSR_IDLE_Pos
#define GMAC_NSR_IDLE_Msk        ETH_NSR_IDLE_Msk
#define GMAC_NSR_IDLE            ETH_NSR_IDLE_Msk

/* ========================================================================== */
/* UR - User Register bit masks                                               */
/* ========================================================================== */
#define GMAC_UR_UO_Pos           ETH_UR_UO_Pos
#define GMAC_UR_UO_Msk           ETH_UR_UO_Msk
#define GMAC_UR_UI_Pos           ETH_UR_UI_Pos
#define GMAC_UR_UI_Msk           ETH_UR_UI_Msk

/*
 * The SAM GMAC UR register uses MII/RMII selection bits.
 * PIC32CK ETH_UR has a generic user-programmable field.
 * Map MII to bit 0 of UO for PHY interface selection.
 */
#define GMAC_UR_MII_Pos          ETH_UR_UO_Pos
#define GMAC_UR_MII_Msk          (_UINT32_(0x1) << GMAC_UR_MII_Pos)
#define GMAC_UR_MII              GMAC_UR_MII_Msk

/* ========================================================================== */
/* DCFGR - DMA Configuration Register bit masks and positions                 */
/* ========================================================================== */
#define GMAC_DCFGR_FBLDO_Pos     ETH_DCFGR_FBLDO_Pos
#define GMAC_DCFGR_FBLDO_Msk     ETH_DCFGR_FBLDO_Msk
#define GMAC_DCFGR_FBLDO(value)  ETH_DCFGR_FBLDO(value)

#define GMAC_DCFGR_ESMA_Pos      ETH_DCFGR_ESMA_Pos
#define GMAC_DCFGR_ESMA_Msk      ETH_DCFGR_ESMA_Msk
#define GMAC_DCFGR_ESMA          ETH_DCFGR_ESMA_Msk

#define GMAC_DCFGR_ESPA_Pos      ETH_DCFGR_ESPA_Pos
#define GMAC_DCFGR_ESPA_Msk      ETH_DCFGR_ESPA_Msk
#define GMAC_DCFGR_ESPA          ETH_DCFGR_ESPA_Msk

#define GMAC_DCFGR_RXBMS_Pos     ETH_DCFGR_RXBMS_Pos
#define GMAC_DCFGR_RXBMS_Msk     ETH_DCFGR_RXBMS_Msk
#define GMAC_DCFGR_RXBMS(value)  ETH_DCFGR_RXBMS(value)
#define GMAC_DCFGR_RXBMS_FULL    ETH_DCFGR_RXBMS(0x3)

#define GMAC_DCFGR_TXPBMS_Pos    ETH_DCFGR_TXPBMS_Pos
#define GMAC_DCFGR_TXPBMS_Msk    ETH_DCFGR_TXPBMS_Msk
#define GMAC_DCFGR_TXPBMS        ETH_DCFGR_TXPBMS_Msk

#define GMAC_DCFGR_TXCOEN_Pos    ETH_DCFGR_TXCOEN_Pos
#define GMAC_DCFGR_TXCOEN_Msk    ETH_DCFGR_TXCOEN_Msk
#define GMAC_DCFGR_TXCOEN        ETH_DCFGR_TXCOEN_Msk

#define GMAC_DCFGR_DRBS_Pos      ETH_DCFGR_DRBS_Pos
#define GMAC_DCFGR_DRBS_Msk      ETH_DCFGR_DRBS_Msk
#define GMAC_DCFGR_DRBS(value)   ETH_DCFGR_DRBS(value)

#define GMAC_DCFGR_DDRP_Pos      ETH_DCFGR_DDRP_Pos
#define GMAC_DCFGR_DDRP_Msk      ETH_DCFGR_DDRP_Msk
#define GMAC_DCFGR_DDRP          ETH_DCFGR_DDRP_Msk

/* ========================================================================== */
/* TSR - Transmit Status Register bit masks                                   */
/* ========================================================================== */
#define GMAC_TSR_UBR_Pos         ETH_TSR_UBR_Pos
#define GMAC_TSR_UBR_Msk         ETH_TSR_UBR_Msk
#define GMAC_TSR_UBR             ETH_TSR_UBR_Msk

#define GMAC_TSR_COL_Pos         ETH_TSR_COL_Pos
#define GMAC_TSR_COL_Msk         ETH_TSR_COL_Msk
#define GMAC_TSR_COL             ETH_TSR_COL_Msk

#define GMAC_TSR_RLE_Pos         ETH_TSR_RLE_Pos
#define GMAC_TSR_RLE_Msk         ETH_TSR_RLE_Msk
#define GMAC_TSR_RLE             ETH_TSR_RLE_Msk

#define GMAC_TSR_TXGO_Pos        ETH_TSR_TXGO_Pos
#define GMAC_TSR_TXGO_Msk        ETH_TSR_TXGO_Msk
#define GMAC_TSR_TXGO            ETH_TSR_TXGO_Msk

#define GMAC_TSR_TFC_Pos         ETH_TSR_TFC_Pos
#define GMAC_TSR_TFC_Msk         ETH_TSR_TFC_Msk
#define GMAC_TSR_TFC             ETH_TSR_TFC_Msk

#define GMAC_TSR_TXCOMP_Pos      ETH_TSR_TXCOMP_Pos
#define GMAC_TSR_TXCOMP_Msk      ETH_TSR_TXCOMP_Msk
#define GMAC_TSR_TXCOMP          ETH_TSR_TXCOMP_Msk

#define GMAC_TSR_UND_Pos         ETH_TSR_UND_Pos
#define GMAC_TSR_UND_Msk         ETH_TSR_UND_Msk
#define GMAC_TSR_UND             ETH_TSR_UND_Msk

#define GMAC_TSR_HRESP_Pos       ETH_TSR_HRESP_Pos
#define GMAC_TSR_HRESP_Msk       ETH_TSR_HRESP_Msk
#define GMAC_TSR_HRESP           ETH_TSR_HRESP_Msk

/* ========================================================================== */
/* RBQB / TBQB - Buffer Queue Base Address Register masks                     */
/* ========================================================================== */
#define GMAC_RBQB_ADDR_Pos       ETH_RBQB_ADDR_Pos
#define GMAC_RBQB_ADDR_Msk       ETH_RBQB_ADDR_Msk

#define GMAC_TBQB_ADDR_Pos       ETH_TBQB_ADDR_Pos
#define GMAC_TBQB_ADDR_Msk       ETH_TBQB_ADDR_Msk

/* ========================================================================== */
/* RSR - Receive Status Register bit masks                                    */
/* ========================================================================== */
#define GMAC_RSR_BNA_Pos         ETH_RSR_BNA_Pos
#define GMAC_RSR_BNA_Msk         ETH_RSR_BNA_Msk
#define GMAC_RSR_BNA             ETH_RSR_BNA_Msk

#define GMAC_RSR_REC_Pos         ETH_RSR_REC_Pos
#define GMAC_RSR_REC_Msk         ETH_RSR_REC_Msk
#define GMAC_RSR_REC             ETH_RSR_REC_Msk

#define GMAC_RSR_RXOVR_Pos       ETH_RSR_RXOVR_Pos
#define GMAC_RSR_RXOVR_Msk       ETH_RSR_RXOVR_Msk
#define GMAC_RSR_RXOVR           ETH_RSR_RXOVR_Msk

#define GMAC_RSR_HNO_Pos         ETH_RSR_HNO_Pos
#define GMAC_RSR_HNO_Msk         ETH_RSR_HNO_Msk
#define GMAC_RSR_HNO             ETH_RSR_HNO_Msk

/* ========================================================================== */
/* ISR - Interrupt Status Register bit masks                                  */
/* ========================================================================== */
#define GMAC_ISR_MFS_Pos         ETH_ISR_MFS_Pos
#define GMAC_ISR_MFS_Msk         ETH_ISR_MFS_Msk
#define GMAC_ISR_MFS             ETH_ISR_MFS_Msk

#define GMAC_ISR_RCOMP_Pos       ETH_ISR_RCOMP_Pos
#define GMAC_ISR_RCOMP_Msk       ETH_ISR_RCOMP_Msk
#define GMAC_ISR_RCOMP           ETH_ISR_RCOMP_Msk

#define GMAC_ISR_RXUBR_Pos       ETH_ISR_RXUBR_Pos
#define GMAC_ISR_RXUBR_Msk       ETH_ISR_RXUBR_Msk
#define GMAC_ISR_RXUBR           ETH_ISR_RXUBR_Msk

#define GMAC_ISR_TXUBR_Pos       ETH_ISR_TXUBR_Pos
#define GMAC_ISR_TXUBR_Msk       ETH_ISR_TXUBR_Msk
#define GMAC_ISR_TXUBR           ETH_ISR_TXUBR_Msk

#define GMAC_ISR_TUR_Pos         ETH_ISR_TUR_Pos
#define GMAC_ISR_TUR_Msk         ETH_ISR_TUR_Msk
#define GMAC_ISR_TUR             ETH_ISR_TUR_Msk

#define GMAC_ISR_RLEX_Pos        ETH_ISR_RLEX_Pos
#define GMAC_ISR_RLEX_Msk        ETH_ISR_RLEX_Msk
#define GMAC_ISR_RLEX            ETH_ISR_RLEX_Msk

#define GMAC_ISR_TFC_Pos         ETH_ISR_TFC_Pos
#define GMAC_ISR_TFC_Msk         ETH_ISR_TFC_Msk
#define GMAC_ISR_TFC             ETH_ISR_TFC_Msk

#define GMAC_ISR_TCOMP_Pos       ETH_ISR_TCOMP_Pos
#define GMAC_ISR_TCOMP_Msk       ETH_ISR_TCOMP_Msk
#define GMAC_ISR_TCOMP           ETH_ISR_TCOMP_Msk

#define GMAC_ISR_ROVR_Pos        ETH_ISR_ROVR_Pos
#define GMAC_ISR_ROVR_Msk        ETH_ISR_ROVR_Msk
#define GMAC_ISR_ROVR            ETH_ISR_ROVR_Msk

#define GMAC_ISR_HRESP_Pos       ETH_ISR_HRESP_Pos
#define GMAC_ISR_HRESP_Msk       ETH_ISR_HRESP_Msk
#define GMAC_ISR_HRESP           ETH_ISR_HRESP_Msk

#define GMAC_ISR_PFNZ_Pos        ETH_ISR_PFNZ_Pos
#define GMAC_ISR_PFNZ_Msk        ETH_ISR_PFNZ_Msk
#define GMAC_ISR_PFNZ            ETH_ISR_PFNZ_Msk

#define GMAC_ISR_PTZ_Pos         ETH_ISR_PTZ_Pos
#define GMAC_ISR_PTZ_Msk         ETH_ISR_PTZ_Msk
#define GMAC_ISR_PTZ             ETH_ISR_PTZ_Msk

#define GMAC_ISR_PFTR_Pos        ETH_ISR_PFTR_Pos
#define GMAC_ISR_PFTR_Msk        ETH_ISR_PFTR_Msk
#define GMAC_ISR_PFTR            ETH_ISR_PFTR_Msk

#define GMAC_ISR_DRQFR_Pos       ETH_ISR_DRQFR_Pos
#define GMAC_ISR_DRQFR_Msk       ETH_ISR_DRQFR_Msk
#define GMAC_ISR_DRQFR           ETH_ISR_DRQFR_Msk

#define GMAC_ISR_SFR_Pos         ETH_ISR_SFR_Pos
#define GMAC_ISR_SFR_Msk         ETH_ISR_SFR_Msk
#define GMAC_ISR_SFR             ETH_ISR_SFR_Msk

#define GMAC_ISR_DRQFT_Pos       ETH_ISR_DRQFT_Pos
#define GMAC_ISR_DRQFT_Msk       ETH_ISR_DRQFT_Msk
#define GMAC_ISR_DRQFT           ETH_ISR_DRQFT_Msk

#define GMAC_ISR_SFT_Pos         ETH_ISR_SFT_Pos
#define GMAC_ISR_SFT_Msk         ETH_ISR_SFT_Msk
#define GMAC_ISR_SFT             ETH_ISR_SFT_Msk

#define GMAC_ISR_PDRQFR_Pos      ETH_ISR_PDRQFR_Pos
#define GMAC_ISR_PDRQFR_Msk      ETH_ISR_PDRQFR_Msk
#define GMAC_ISR_PDRQFR          ETH_ISR_PDRQFR_Msk

#define GMAC_ISR_PDRSFR_Pos      ETH_ISR_PDRSFR_Pos
#define GMAC_ISR_PDRSFR_Msk      ETH_ISR_PDRSFR_Msk
#define GMAC_ISR_PDRSFR          ETH_ISR_PDRSFR_Msk

#define GMAC_ISR_PDRQFT_Pos      ETH_ISR_PDRQFT_Pos
#define GMAC_ISR_PDRQFT_Msk      ETH_ISR_PDRQFT_Msk
#define GMAC_ISR_PDRQFT          ETH_ISR_PDRQFT_Msk

#define GMAC_ISR_PDRSFT_Pos      ETH_ISR_PDRSFT_Pos
#define GMAC_ISR_PDRSFT_Msk      ETH_ISR_PDRSFT_Msk
#define GMAC_ISR_PDRSFT          ETH_ISR_PDRSFT_Msk

#define GMAC_ISR_SRI_Pos         ETH_ISR_SRI_Pos
#define GMAC_ISR_SRI_Msk         ETH_ISR_SRI_Msk
#define GMAC_ISR_SRI             ETH_ISR_SRI_Msk

#define GMAC_ISR_WOL_Pos         ETH_ISR_WOL_Pos
#define GMAC_ISR_WOL_Msk         ETH_ISR_WOL_Msk
#define GMAC_ISR_WOL             ETH_ISR_WOL_Msk

#define GMAC_ISR_TSUCMP_Pos      ETH_ISR_TSUCMP_Pos
#define GMAC_ISR_TSUCMP_Msk      ETH_ISR_TSUCMP_Msk
#define GMAC_ISR_TSUCMP          ETH_ISR_TSUCMP_Msk

/* ========================================================================== */
/* IER - Interrupt Enable Register bit masks                                  */
/* ========================================================================== */
#define GMAC_IER_MFS_Pos         ETH_IER_MFS_Pos
#define GMAC_IER_MFS_Msk         ETH_IER_MFS_Msk
#define GMAC_IER_MFS             ETH_IER_MFS_Msk

#define GMAC_IER_RCOMP_Pos       ETH_IER_RCOMP_Pos
#define GMAC_IER_RCOMP_Msk       ETH_IER_RCOMP_Msk
#define GMAC_IER_RCOMP           ETH_IER_RCOMP_Msk

#define GMAC_IER_RXUBR_Pos       ETH_IER_RXUBR_Pos
#define GMAC_IER_RXUBR_Msk       ETH_IER_RXUBR_Msk
#define GMAC_IER_RXUBR           ETH_IER_RXUBR_Msk

#define GMAC_IER_TXUBR_Pos       ETH_IER_TXUBR_Pos
#define GMAC_IER_TXUBR_Msk       ETH_IER_TXUBR_Msk
#define GMAC_IER_TXUBR           ETH_IER_TXUBR_Msk

#define GMAC_IER_TUR_Pos         ETH_IER_TUR_Pos
#define GMAC_IER_TUR_Msk         ETH_IER_TUR_Msk
#define GMAC_IER_TUR             ETH_IER_TUR_Msk

#define GMAC_IER_RLEX_Pos        ETH_IER_RLEX_Pos
#define GMAC_IER_RLEX_Msk        ETH_IER_RLEX_Msk
#define GMAC_IER_RLEX            ETH_IER_RLEX_Msk

#define GMAC_IER_TFC_Pos         ETH_IER_TFC_Pos
#define GMAC_IER_TFC_Msk         ETH_IER_TFC_Msk
#define GMAC_IER_TFC             ETH_IER_TFC_Msk

#define GMAC_IER_TCOMP_Pos       ETH_IER_TCOMP_Pos
#define GMAC_IER_TCOMP_Msk       ETH_IER_TCOMP_Msk
#define GMAC_IER_TCOMP           ETH_IER_TCOMP_Msk

#define GMAC_IER_ROVR_Pos        ETH_IER_ROVR_Pos
#define GMAC_IER_ROVR_Msk        ETH_IER_ROVR_Msk
#define GMAC_IER_ROVR            ETH_IER_ROVR_Msk

#define GMAC_IER_HRESP_Pos       ETH_IER_HRESP_Pos
#define GMAC_IER_HRESP_Msk       ETH_IER_HRESP_Msk
#define GMAC_IER_HRESP           ETH_IER_HRESP_Msk

#define GMAC_IER_PFNZ_Pos        ETH_IER_PFNZ_Pos
#define GMAC_IER_PFNZ_Msk        ETH_IER_PFNZ_Msk
#define GMAC_IER_PFNZ            ETH_IER_PFNZ_Msk

#define GMAC_IER_PTZ_Pos         ETH_IER_PTZ_Pos
#define GMAC_IER_PTZ_Msk         ETH_IER_PTZ_Msk
#define GMAC_IER_PTZ             ETH_IER_PTZ_Msk

#define GMAC_IER_PFTR_Pos        ETH_IER_PFTR_Pos
#define GMAC_IER_PFTR_Msk        ETH_IER_PFTR_Msk
#define GMAC_IER_PFTR            ETH_IER_PFTR_Msk

#define GMAC_IER_EXINT_Pos       ETH_IER_EXINT_Pos
#define GMAC_IER_EXINT_Msk       ETH_IER_EXINT_Msk
#define GMAC_IER_EXINT           ETH_IER_EXINT_Msk

#define GMAC_IER_DRQFR_Pos       ETH_IER_DRQFR_Pos
#define GMAC_IER_DRQFR_Msk       ETH_IER_DRQFR_Msk
#define GMAC_IER_DRQFR           ETH_IER_DRQFR_Msk

#define GMAC_IER_SFR_Pos         ETH_IER_SFR_Pos
#define GMAC_IER_SFR_Msk         ETH_IER_SFR_Msk
#define GMAC_IER_SFR             ETH_IER_SFR_Msk

#define GMAC_IER_DRQFT_Pos       ETH_IER_DRQFT_Pos
#define GMAC_IER_DRQFT_Msk       ETH_IER_DRQFT_Msk
#define GMAC_IER_DRQFT           ETH_IER_DRQFT_Msk

#define GMAC_IER_SFT_Pos         ETH_IER_SFT_Pos
#define GMAC_IER_SFT_Msk         ETH_IER_SFT_Msk
#define GMAC_IER_SFT             ETH_IER_SFT_Msk

#define GMAC_IER_PDRQFR_Pos      ETH_IER_PDRQFR_Pos
#define GMAC_IER_PDRQFR_Msk      ETH_IER_PDRQFR_Msk
#define GMAC_IER_PDRQFR          ETH_IER_PDRQFR_Msk

#define GMAC_IER_PDRSFR_Pos      ETH_IER_PDRSFR_Pos
#define GMAC_IER_PDRSFR_Msk      ETH_IER_PDRSFR_Msk
#define GMAC_IER_PDRSFR          ETH_IER_PDRSFR_Msk

#define GMAC_IER_PDRQFT_Pos      ETH_IER_PDRQFT_Pos
#define GMAC_IER_PDRQFT_Msk      ETH_IER_PDRQFT_Msk
#define GMAC_IER_PDRQFT          ETH_IER_PDRQFT_Msk

#define GMAC_IER_PDRSFT_Pos      ETH_IER_PDRSFT_Pos
#define GMAC_IER_PDRSFT_Msk      ETH_IER_PDRSFT_Msk
#define GMAC_IER_PDRSFT          ETH_IER_PDRSFT_Msk

#define GMAC_IER_SRI_Pos         ETH_IER_SRI_Pos
#define GMAC_IER_SRI_Msk         ETH_IER_SRI_Msk
#define GMAC_IER_SRI             ETH_IER_SRI_Msk

#define GMAC_IER_WOL_Pos         ETH_IER_WOL_Pos
#define GMAC_IER_WOL_Msk         ETH_IER_WOL_Msk
#define GMAC_IER_WOL             ETH_IER_WOL_Msk

#define GMAC_IER_TSUCMP_Pos      ETH_IER_TSUCMP_Pos
#define GMAC_IER_TSUCMP_Msk      ETH_IER_TSUCMP_Msk
#define GMAC_IER_TSUCMP          ETH_IER_TSUCMP_Msk

/* ========================================================================== */
/* IDR - Interrupt Disable Register bit masks                                 */
/* ========================================================================== */
#define GMAC_IDR_MFS_Pos         ETH_IDR_MFS_Pos
#define GMAC_IDR_MFS_Msk         ETH_IDR_MFS_Msk
#define GMAC_IDR_MFS             ETH_IDR_MFS_Msk

#define GMAC_IDR_RCOMP_Pos       ETH_IDR_RCOMP_Pos
#define GMAC_IDR_RCOMP_Msk       ETH_IDR_RCOMP_Msk
#define GMAC_IDR_RCOMP           ETH_IDR_RCOMP_Msk

#define GMAC_IDR_RXUBR_Pos       ETH_IDR_RXUBR_Pos
#define GMAC_IDR_RXUBR_Msk       ETH_IDR_RXUBR_Msk
#define GMAC_IDR_RXUBR           ETH_IDR_RXUBR_Msk

#define GMAC_IDR_TXUBR_Pos       ETH_IDR_TXUBR_Pos
#define GMAC_IDR_TXUBR_Msk       ETH_IDR_TXUBR_Msk
#define GMAC_IDR_TXUBR           ETH_IDR_TXUBR_Msk

#define GMAC_IDR_TUR_Pos         ETH_IDR_TUR_Pos
#define GMAC_IDR_TUR_Msk         ETH_IDR_TUR_Msk
#define GMAC_IDR_TUR             ETH_IDR_TUR_Msk

#define GMAC_IDR_RLEX_Pos        ETH_IDR_RLEX_Pos
#define GMAC_IDR_RLEX_Msk        ETH_IDR_RLEX_Msk
#define GMAC_IDR_RLEX            ETH_IDR_RLEX_Msk

#define GMAC_IDR_TFC_Pos         ETH_IDR_TFC_Pos
#define GMAC_IDR_TFC_Msk         ETH_IDR_TFC_Msk
#define GMAC_IDR_TFC             ETH_IDR_TFC_Msk

#define GMAC_IDR_TCOMP_Pos       ETH_IDR_TCOMP_Pos
#define GMAC_IDR_TCOMP_Msk       ETH_IDR_TCOMP_Msk
#define GMAC_IDR_TCOMP           ETH_IDR_TCOMP_Msk

#define GMAC_IDR_ROVR_Pos        ETH_IDR_ROVR_Pos
#define GMAC_IDR_ROVR_Msk        ETH_IDR_ROVR_Msk
#define GMAC_IDR_ROVR            ETH_IDR_ROVR_Msk

#define GMAC_IDR_HRESP_Pos       ETH_IDR_HRESP_Pos
#define GMAC_IDR_HRESP_Msk       ETH_IDR_HRESP_Msk
#define GMAC_IDR_HRESP           ETH_IDR_HRESP_Msk

#define GMAC_IDR_PFNZ_Pos        ETH_IDR_PFNZ_Pos
#define GMAC_IDR_PFNZ_Msk        ETH_IDR_PFNZ_Msk
#define GMAC_IDR_PFNZ            ETH_IDR_PFNZ_Msk

#define GMAC_IDR_PTZ_Pos         ETH_IDR_PTZ_Pos
#define GMAC_IDR_PTZ_Msk         ETH_IDR_PTZ_Msk
#define GMAC_IDR_PTZ             ETH_IDR_PTZ_Msk

#define GMAC_IDR_PFTR_Pos        ETH_IDR_PFTR_Pos
#define GMAC_IDR_PFTR_Msk        ETH_IDR_PFTR_Msk
#define GMAC_IDR_PFTR            ETH_IDR_PFTR_Msk

#define GMAC_IDR_EXINT_Pos       ETH_IDR_EXINT_Pos
#define GMAC_IDR_EXINT_Msk       ETH_IDR_EXINT_Msk
#define GMAC_IDR_EXINT           ETH_IDR_EXINT_Msk

#define GMAC_IDR_DRQFR_Pos       ETH_IDR_DRQFR_Pos
#define GMAC_IDR_DRQFR_Msk       ETH_IDR_DRQFR_Msk
#define GMAC_IDR_DRQFR           ETH_IDR_DRQFR_Msk

#define GMAC_IDR_SFR_Pos         ETH_IDR_SFR_Pos
#define GMAC_IDR_SFR_Msk         ETH_IDR_SFR_Msk
#define GMAC_IDR_SFR             ETH_IDR_SFR_Msk

#define GMAC_IDR_DRQFT_Pos       ETH_IDR_DRQFT_Pos
#define GMAC_IDR_DRQFT_Msk       ETH_IDR_DRQFT_Msk
#define GMAC_IDR_DRQFT           ETH_IDR_DRQFT_Msk

#define GMAC_IDR_SFT_Pos         ETH_IDR_SFT_Pos
#define GMAC_IDR_SFT_Msk         ETH_IDR_SFT_Msk
#define GMAC_IDR_SFT             ETH_IDR_SFT_Msk

#define GMAC_IDR_PDRQFR_Pos      ETH_IDR_PDRQFR_Pos
#define GMAC_IDR_PDRQFR_Msk      ETH_IDR_PDRQFR_Msk
#define GMAC_IDR_PDRQFR          ETH_IDR_PDRQFR_Msk

#define GMAC_IDR_PDRSFR_Pos      ETH_IDR_PDRSFR_Pos
#define GMAC_IDR_PDRSFR_Msk      ETH_IDR_PDRSFR_Msk
#define GMAC_IDR_PDRSFR          ETH_IDR_PDRSFR_Msk

#define GMAC_IDR_PDRQFT_Pos      ETH_IDR_PDRQFT_Pos
#define GMAC_IDR_PDRQFT_Msk      ETH_IDR_PDRQFT_Msk
#define GMAC_IDR_PDRQFT          ETH_IDR_PDRQFT_Msk

#define GMAC_IDR_PDRSFT_Pos      ETH_IDR_PDRSFT_Pos
#define GMAC_IDR_PDRSFT_Msk      ETH_IDR_PDRSFT_Msk
#define GMAC_IDR_PDRSFT          ETH_IDR_PDRSFT_Msk

#define GMAC_IDR_SRI_Pos         ETH_IDR_SRI_Pos
#define GMAC_IDR_SRI_Msk         ETH_IDR_SRI_Msk
#define GMAC_IDR_SRI             ETH_IDR_SRI_Msk

#define GMAC_IDR_WOL_Pos         ETH_IDR_WOL_Pos
#define GMAC_IDR_WOL_Msk         ETH_IDR_WOL_Msk
#define GMAC_IDR_WOL             ETH_IDR_WOL_Msk

#define GMAC_IDR_TSUCMP_Pos      ETH_IDR_TSUCMP_Pos
#define GMAC_IDR_TSUCMP_Msk      ETH_IDR_TSUCMP_Msk
#define GMAC_IDR_TSUCMP          ETH_IDR_TSUCMP_Msk

/* ========================================================================== */
/* IMR - Interrupt Mask Register bit masks                                    */
/* ========================================================================== */
#define GMAC_IMR_MFS_Pos         ETH_IMR_MFS_Pos
#define GMAC_IMR_MFS_Msk         ETH_IMR_MFS_Msk
#define GMAC_IMR_MFS             ETH_IMR_MFS_Msk

#define GMAC_IMR_RCOMP_Pos       ETH_IMR_RCOMP_Pos
#define GMAC_IMR_RCOMP_Msk       ETH_IMR_RCOMP_Msk
#define GMAC_IMR_RCOMP           ETH_IMR_RCOMP_Msk

#define GMAC_IMR_RXUBR_Pos       ETH_IMR_RXUBR_Pos
#define GMAC_IMR_RXUBR_Msk       ETH_IMR_RXUBR_Msk
#define GMAC_IMR_RXUBR           ETH_IMR_RXUBR_Msk

#define GMAC_IMR_TXUBR_Pos       ETH_IMR_TXUBR_Pos
#define GMAC_IMR_TXUBR_Msk       ETH_IMR_TXUBR_Msk
#define GMAC_IMR_TXUBR           ETH_IMR_TXUBR_Msk

#define GMAC_IMR_TUR_Pos         ETH_IMR_TUR_Pos
#define GMAC_IMR_TUR_Msk         ETH_IMR_TUR_Msk
#define GMAC_IMR_TUR             ETH_IMR_TUR_Msk

#define GMAC_IMR_RLEX_Pos        ETH_IMR_RLEX_Pos
#define GMAC_IMR_RLEX_Msk        ETH_IMR_RLEX_Msk
#define GMAC_IMR_RLEX            ETH_IMR_RLEX_Msk

#define GMAC_IMR_TFC_Pos         ETH_IMR_TFC_Pos
#define GMAC_IMR_TFC_Msk         ETH_IMR_TFC_Msk
#define GMAC_IMR_TFC             ETH_IMR_TFC_Msk

#define GMAC_IMR_TCOMP_Pos       ETH_IMR_TCOMP_Pos
#define GMAC_IMR_TCOMP_Msk       ETH_IMR_TCOMP_Msk
#define GMAC_IMR_TCOMP           ETH_IMR_TCOMP_Msk

#define GMAC_IMR_ROVR_Pos        ETH_IMR_ROVR_Pos
#define GMAC_IMR_ROVR_Msk        ETH_IMR_ROVR_Msk
#define GMAC_IMR_ROVR            ETH_IMR_ROVR_Msk

#define GMAC_IMR_HRESP_Pos       ETH_IMR_HRESP_Pos
#define GMAC_IMR_HRESP_Msk       ETH_IMR_HRESP_Msk
#define GMAC_IMR_HRESP           ETH_IMR_HRESP_Msk

#define GMAC_IMR_PFNZ_Pos        ETH_IMR_PFNZ_Pos
#define GMAC_IMR_PFNZ_Msk        ETH_IMR_PFNZ_Msk
#define GMAC_IMR_PFNZ            ETH_IMR_PFNZ_Msk

#define GMAC_IMR_PTZ_Pos         ETH_IMR_PTZ_Pos
#define GMAC_IMR_PTZ_Msk         ETH_IMR_PTZ_Msk
#define GMAC_IMR_PTZ             ETH_IMR_PTZ_Msk

#define GMAC_IMR_PFTR_Pos        ETH_IMR_PFTR_Pos
#define GMAC_IMR_PFTR_Msk        ETH_IMR_PFTR_Msk
#define GMAC_IMR_PFTR            ETH_IMR_PFTR_Msk

#define GMAC_IMR_EXINT_Pos       ETH_IMR_EXINT_Pos
#define GMAC_IMR_EXINT_Msk       ETH_IMR_EXINT_Msk
#define GMAC_IMR_EXINT           ETH_IMR_EXINT_Msk

#define GMAC_IMR_DRQFR_Pos       ETH_IMR_DRQFR_Pos
#define GMAC_IMR_DRQFR_Msk       ETH_IMR_DRQFR_Msk
#define GMAC_IMR_DRQFR           ETH_IMR_DRQFR_Msk

#define GMAC_IMR_SFR_Pos         ETH_IMR_SFR_Pos
#define GMAC_IMR_SFR_Msk         ETH_IMR_SFR_Msk
#define GMAC_IMR_SFR             ETH_IMR_SFR_Msk

#define GMAC_IMR_DRQFT_Pos       ETH_IMR_DRQFT_Pos
#define GMAC_IMR_DRQFT_Msk       ETH_IMR_DRQFT_Msk
#define GMAC_IMR_DRQFT           ETH_IMR_DRQFT_Msk

#define GMAC_IMR_SFT_Pos         ETH_IMR_SFT_Pos
#define GMAC_IMR_SFT_Msk         ETH_IMR_SFT_Msk
#define GMAC_IMR_SFT             ETH_IMR_SFT_Msk

#define GMAC_IMR_PDRQFR_Pos      ETH_IMR_PDRQFR_Pos
#define GMAC_IMR_PDRQFR_Msk      ETH_IMR_PDRQFR_Msk
#define GMAC_IMR_PDRQFR          ETH_IMR_PDRQFR_Msk

#define GMAC_IMR_PDRSFR_Pos      ETH_IMR_PDRSFR_Pos
#define GMAC_IMR_PDRSFR_Msk      ETH_IMR_PDRSFR_Msk
#define GMAC_IMR_PDRSFR          ETH_IMR_PDRSFR_Msk

#define GMAC_IMR_PDRQFT_Pos      ETH_IMR_PDRQFT_Pos
#define GMAC_IMR_PDRQFT_Msk      ETH_IMR_PDRQFT_Msk
#define GMAC_IMR_PDRQFT          ETH_IMR_PDRQFT_Msk

#define GMAC_IMR_PDRSFT_Pos      ETH_IMR_PDRSFT_Pos
#define GMAC_IMR_PDRSFT_Msk      ETH_IMR_PDRSFT_Msk
#define GMAC_IMR_PDRSFT          ETH_IMR_PDRSFT_Msk

#define GMAC_IMR_SRI_Pos         ETH_IMR_SRI_Pos
#define GMAC_IMR_SRI_Msk         ETH_IMR_SRI_Msk
#define GMAC_IMR_SRI             ETH_IMR_SRI_Msk

#define GMAC_IMR_WOL_Pos         ETH_IMR_WOL_Pos
#define GMAC_IMR_WOL_Msk         ETH_IMR_WOL_Msk
#define GMAC_IMR_WOL             ETH_IMR_WOL_Msk

#define GMAC_IMR_TSUCMP_Pos      ETH_IMR_TSUCMP_Pos
#define GMAC_IMR_TSUCMP_Msk      ETH_IMR_TSUCMP_Msk
#define GMAC_IMR_TSUCMP          ETH_IMR_TSUCMP_Msk

/* ========================================================================== */
/* MAN - PHY Maintenance Register bit masks and function macros               */
/* ========================================================================== */
#define GMAC_MAN_DATA_Pos        ETH_MAN_DATA_Pos
#define GMAC_MAN_DATA_Msk        ETH_MAN_DATA_Msk
#define GMAC_MAN_DATA(value)     ETH_MAN_DATA(value)

#define GMAC_MAN_WTN_Pos         ETH_MAN_WTN_Pos
#define GMAC_MAN_WTN_Msk         ETH_MAN_WTN_Msk
#define GMAC_MAN_WTN(value)      ETH_MAN_WTN(value)

#define GMAC_MAN_REGA_Pos        ETH_MAN_REGA_Pos
#define GMAC_MAN_REGA_Msk        ETH_MAN_REGA_Msk
#define GMAC_MAN_REGA(value)     ETH_MAN_REGA(value)

#define GMAC_MAN_PHYA_Pos        ETH_MAN_PHYA_Pos
#define GMAC_MAN_PHYA_Msk        ETH_MAN_PHYA_Msk
#define GMAC_MAN_PHYA(value)     ETH_MAN_PHYA(value)

#define GMAC_MAN_OP_Pos          ETH_MAN_OP_Pos
#define GMAC_MAN_OP_Msk          ETH_MAN_OP_Msk
#define GMAC_MAN_OP(value)       ETH_MAN_OP(value)

#define GMAC_MAN_CLTTO_Pos       ETH_MAN_CLTTO_Pos
#define GMAC_MAN_CLTTO_Msk       ETH_MAN_CLTTO_Msk
#define GMAC_MAN_CLTTO           ETH_MAN_CLTTO_Msk

#define GMAC_MAN_WZO_Pos         ETH_MAN_WZO_Pos
#define GMAC_MAN_WZO_Msk         ETH_MAN_WZO_Msk
#define GMAC_MAN_WZO             ETH_MAN_WZO_Msk

/* ========================================================================== */
/* SAB/SAT - Specific Address bit masks                                       */
/* ========================================================================== */
#define GMAC_SAB_ADDR_Pos        ETH_SAB_ADDR_Pos
#define GMAC_SAB_ADDR_Msk        ETH_SAB_ADDR_Msk

#define GMAC_SAT_ADDR_Pos        ETH_SAT_ADDR_Pos
#define GMAC_SAT_ADDR_Msk        ETH_SAT_ADDR_Msk

/* ========================================================================== */
/* NCFGR CLK divider value macros                                             */
/* ========================================================================== */
#define GMAC_NCFGR_CLK_MCK_8    ETH_NCFGR_CLK(0)
#define GMAC_NCFGR_CLK_MCK_16   ETH_NCFGR_CLK(1)
#define GMAC_NCFGR_CLK_MCK_32   ETH_NCFGR_CLK(2)
#define GMAC_NCFGR_CLK_MCK_48   ETH_NCFGR_CLK(3)
#define GMAC_NCFGR_CLK_MCK_64   ETH_NCFGR_CLK(4)
#define GMAC_NCFGR_CLK_MCK_96   ETH_NCFGR_CLK(5)

/* ========================================================================== */
/* DCFGR FBLDO value macros                                                   */
/* ========================================================================== */
#define GMAC_DCFGR_FBLDO_SINGLE  ETH_DCFGR_FBLDO(1)
#define GMAC_DCFGR_FBLDO_INCR4   ETH_DCFGR_FBLDO(2)
#define GMAC_DCFGR_FBLDO_INCR8   ETH_DCFGR_FBLDO(3)
#define GMAC_DCFGR_FBLDO_INCR16  ETH_DCFGR_FBLDO(4)

/* ========================================================================== */
/* TPSF / RPSF register bit masks                                             */
/* ========================================================================== */
#define GMAC_TPSF_TPB1ADR_Pos    ETH_TPSF_TPB1ADR_Pos
#define GMAC_TPSF_TPB1ADR_Msk    ETH_TPSF_TPB1ADR_Msk
#define GMAC_TPSF_ENTXP_Pos      ETH_TPSF_ENTXP_Pos
#define GMAC_TPSF_ENTXP_Msk      ETH_TPSF_ENTXP_Msk
#define GMAC_TPSF_ENTXP           ETH_TPSF_ENTXP_Msk

#define GMAC_RPSF_RPB1ADR_Pos    ETH_RPSF_RPB1ADR_Pos
#define GMAC_RPSF_RPB1ADR_Msk    ETH_RPSF_RPB1ADR_Msk
#define GMAC_RPSF_ENRXP_Pos      ETH_RPSF_ENRXP_Pos
#define GMAC_RPSF_ENRXP_Msk      ETH_RPSF_ENRXP_Msk
#define GMAC_RPSF_ENRXP           ETH_RPSF_ENRXP_Msk

/* ========================================================================== */
/* RJFML register bit masks                                                   */
/* ========================================================================== */
#define GMAC_RJFML_FML_Pos       ETH_RJFML_FML_Pos
#define GMAC_RJFML_FML_Msk       ETH_RJFML_FML_Msk
#define GMAC_RJFML_FML(value)    ETH_RJFML_FML(value)

/* ========================================================================== */
/* WOL register bit masks                                                     */
/* ========================================================================== */
#define GMAC_WOL_IP_Pos          ETH_WOL_IP_Pos
#define GMAC_WOL_IP_Msk          ETH_WOL_IP_Msk
#define GMAC_WOL_MAG_Pos         ETH_WOL_MAG_Pos
#define GMAC_WOL_MAG_Msk         ETH_WOL_MAG_Msk
#define GMAC_WOL_MAG             ETH_WOL_MAG_Msk

/* ========================================================================== */
/* PIC32CK-specific: ETH CTRLA/CTRLB for peripheral enable/reset              */
/* These are additional registers not present in the SAM GMAC but needed for  */
/* PIC32CK ETH peripheral initialization.                                     */
/* ========================================================================== */
#define GMAC_CTRLA_SWRST_Pos     ETH_CTRLA_SWRST_Pos
#define GMAC_CTRLA_SWRST_Msk     ETH_CTRLA_SWRST_Msk
#define GMAC_CTRLA_SWRST         ETH_CTRLA_SWRST_Msk

#define GMAC_CTRLA_ENABLE_Pos    ETH_CTRLA_ENABLE_Pos
#define GMAC_CTRLA_ENABLE_Msk    ETH_CTRLA_ENABLE_Msk
#define GMAC_CTRLA_ENABLE        ETH_CTRLA_ENABLE_Msk

#define GMAC_CTRLB_GMIIEN_Pos    ETH_CTRLB_GMIIEN_Pos
#define GMAC_CTRLB_GMIIEN_Msk    ETH_CTRLB_GMIIEN_Msk
#define GMAC_CTRLB_GMIIEN        ETH_CTRLB_GMIIEN_Msk

#define GMAC_SYNCB_SWRST_Pos     ETH_SYNCB_SWRST_Pos
#define GMAC_SYNCB_SWRST_Msk     ETH_SYNCB_SWRST_Msk
#define GMAC_SYNCB_ENABLE_Pos    ETH_SYNCB_ENABLE_Pos
#define GMAC_SYNCB_ENABLE_Msk    ETH_SYNCB_ENABLE_Msk

#endif /* MICROCHIP_COMMON_ETH_PIC32CK_SG_GC_H_ */
