#ifndef __SOC_CS_TOP_ETR_INTERFACE_H__
#define __SOC_CS_TOP_ETR_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_CS_TOP_ETR_ETR_RSZ_ADDR(base) ((base) + (0x004))
#define SOC_CS_TOP_ETR_ETR_STS_ADDR(base) ((base) + (0x00C))
#define SOC_CS_TOP_ETR_ETR_RRD_ADDR(base) ((base) + (0x010))
#define SOC_CS_TOP_ETR_ETR_RRP_ADDR(base) ((base) + (0x014))
#define SOC_CS_TOP_ETR_ETR_RWP_ADDR(base) ((base) + (0x018))
#define SOC_CS_TOP_ETR_ETR_TRG_ADDR(base) ((base) + (0x01C))
#define SOC_CS_TOP_ETR_ETR_CTL_ADDR(base) ((base) + (0x020))
#define SOC_CS_TOP_ETR_ETR_RWD_ADDR(base) ((base) + (0x024))
#define SOC_CS_TOP_ETR_ETR_MODE_ADDR(base) ((base) + (0x028))
#define SOC_CS_TOP_ETR_ETR_LBUFLEVEL_ADDR(base) ((base) + (0x02C))
#define SOC_CS_TOP_ETR_ETR_CBUFLEVEL_ADDR(base) ((base) + (0x030))
#define SOC_CS_TOP_ETR_ETR_BUFWM_ADDR(base) ((base) + (0x034))
#define SOC_CS_TOP_ETR_ETR_RRPHI_ADDR(base) ((base) + (0x038))
#define SOC_CS_TOP_ETR_ETR_RWPHI_ADDR(base) ((base) + (0x03C))
#define SOC_CS_TOP_ETR_ETR_AXICTL_ADDR(base) ((base) + (0x110))
#define SOC_CS_TOP_ETR_ETR_DBALO_ADDR(base) ((base) + (0x118))
#define SOC_CS_TOP_ETR_ETR_DBAHO_ADDR(base) ((base) + (0x11C))
#define SOC_CS_TOP_ETR_ETR_FFSR_ADDR(base) ((base) + (0x300))
#define SOC_CS_TOP_ETR_ETR_FFCR_ADDR(base) ((base) + (0x304))
#define SOC_CS_TOP_ETR_ETR_FSCR_ADDR(base) ((base) + (0x308))
#define SOC_CS_TOP_ETR_ETR_LAR_ADDR(base) ((base) + (0xFB0))
#define SOC_CS_TOP_ETR_ETR_LSR_ADDR(base) ((base) + (0xFB4))
#define SOC_CS_TOP_ETR_ETR_AUTHSTATUS_ADDR(base) ((base) + (0xFB8))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rsz : 31;
        unsigned int reserved : 1;
    } reg;
} SOC_CS_TOP_ETR_ETR_RSZ_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_RSZ_rsz_START (0)
#define SOC_CS_TOP_ETR_ETR_RSZ_rsz_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int full : 1;
        unsigned int triggered : 1;
        unsigned int tmcready : 1;
        unsigned int ftempty : 1;
        unsigned int empty : 1;
        unsigned int memerr : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_CS_TOP_ETR_ETR_STS_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_STS_full_START (0)
#define SOC_CS_TOP_ETR_ETR_STS_full_END (0)
#define SOC_CS_TOP_ETR_ETR_STS_triggered_START (1)
#define SOC_CS_TOP_ETR_ETR_STS_triggered_END (1)
#define SOC_CS_TOP_ETR_ETR_STS_tmcready_START (2)
#define SOC_CS_TOP_ETR_ETR_STS_tmcready_END (2)
#define SOC_CS_TOP_ETR_ETR_STS_ftempty_START (3)
#define SOC_CS_TOP_ETR_ETR_STS_ftempty_END (3)
#define SOC_CS_TOP_ETR_ETR_STS_empty_START (4)
#define SOC_CS_TOP_ETR_ETR_STS_empty_END (4)
#define SOC_CS_TOP_ETR_ETR_STS_memerr_START (5)
#define SOC_CS_TOP_ETR_ETR_STS_memerr_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rrd : 32;
    } reg;
} SOC_CS_TOP_ETR_ETR_RRD_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_RRD_rrd_START (0)
#define SOC_CS_TOP_ETR_ETR_RRD_rrd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rrp : 32;
    } reg;
} SOC_CS_TOP_ETR_ETR_RRP_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_RRP_rrp_START (0)
#define SOC_CS_TOP_ETR_ETR_RRP_rrp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rwp : 32;
    } reg;
} SOC_CS_TOP_ETR_ETR_RWP_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_RWP_rwp_START (0)
#define SOC_CS_TOP_ETR_ETR_RWP_rwp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trg : 32;
    } reg;
} SOC_CS_TOP_ETR_ETR_TRG_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_TRG_trg_START (0)
#define SOC_CS_TOP_ETR_ETR_TRG_trg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tracecapten : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_CS_TOP_ETR_ETR_CTL_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_CTL_tracecapten_START (0)
#define SOC_CS_TOP_ETR_ETR_CTL_tracecapten_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rwd : 32;
    } reg;
} SOC_CS_TOP_ETR_ETR_RWD_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_RWD_rwd_START (0)
#define SOC_CS_TOP_ETR_ETR_RWD_rwd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mode : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_CS_TOP_ETR_ETR_MODE_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_MODE_mode_START (0)
#define SOC_CS_TOP_ETR_ETR_MODE_mode_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lbuflevel : 32;
    } reg;
} SOC_CS_TOP_ETR_ETR_LBUFLEVEL_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_LBUFLEVEL_lbuflevel_START (0)
#define SOC_CS_TOP_ETR_ETR_LBUFLEVEL_lbuflevel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cbuflevel : 32;
    } reg;
} SOC_CS_TOP_ETR_ETR_CBUFLEVEL_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_CBUFLEVEL_cbuflevel_START (0)
#define SOC_CS_TOP_ETR_ETR_CBUFLEVEL_cbuflevel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bufwm : 32;
    } reg;
} SOC_CS_TOP_ETR_ETR_BUFWM_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_BUFWM_bufwm_START (0)
#define SOC_CS_TOP_ETR_ETR_BUFWM_bufwm_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rrphi : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_CS_TOP_ETR_ETR_RRPHI_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_RRPHI_rrphi_START (0)
#define SOC_CS_TOP_ETR_ETR_RRPHI_rrphi_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rwphi : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_CS_TOP_ETR_ETR_RWPHI_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_RWPHI_rwphi_START (0)
#define SOC_CS_TOP_ETR_ETR_RWPHI_rwphi_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int protctrlbit0 : 1;
        unsigned int protctrlbit1 : 1;
        unsigned int cachectrlbit0 : 1;
        unsigned int cachectrlbit1 : 1;
        unsigned int cachectrlbit2 : 1;
        unsigned int cachectrlbit3 : 1;
        unsigned int reserved_0 : 1;
        unsigned int scattergathermode : 1;
        unsigned int wrburstlen : 4;
        unsigned int reserved_1 : 20;
    } reg;
} SOC_CS_TOP_ETR_ETR_AXICTL_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_AXICTL_protctrlbit0_START (0)
#define SOC_CS_TOP_ETR_ETR_AXICTL_protctrlbit0_END (0)
#define SOC_CS_TOP_ETR_ETR_AXICTL_protctrlbit1_START (1)
#define SOC_CS_TOP_ETR_ETR_AXICTL_protctrlbit1_END (1)
#define SOC_CS_TOP_ETR_ETR_AXICTL_cachectrlbit0_START (2)
#define SOC_CS_TOP_ETR_ETR_AXICTL_cachectrlbit0_END (2)
#define SOC_CS_TOP_ETR_ETR_AXICTL_cachectrlbit1_START (3)
#define SOC_CS_TOP_ETR_ETR_AXICTL_cachectrlbit1_END (3)
#define SOC_CS_TOP_ETR_ETR_AXICTL_cachectrlbit2_START (4)
#define SOC_CS_TOP_ETR_ETR_AXICTL_cachectrlbit2_END (4)
#define SOC_CS_TOP_ETR_ETR_AXICTL_cachectrlbit3_START (5)
#define SOC_CS_TOP_ETR_ETR_AXICTL_cachectrlbit3_END (5)
#define SOC_CS_TOP_ETR_ETR_AXICTL_scattergathermode_START (7)
#define SOC_CS_TOP_ETR_ETR_AXICTL_scattergathermode_END (7)
#define SOC_CS_TOP_ETR_ETR_AXICTL_wrburstlen_START (8)
#define SOC_CS_TOP_ETR_ETR_AXICTL_wrburstlen_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bufaddrlo : 32;
    } reg;
} SOC_CS_TOP_ETR_ETR_DBALO_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_DBALO_bufaddrlo_START (0)
#define SOC_CS_TOP_ETR_ETR_DBALO_bufaddrlo_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bufaddrhi : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_CS_TOP_ETR_ETR_DBAHO_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_DBAHO_bufaddrhi_START (0)
#define SOC_CS_TOP_ETR_ETR_DBAHO_bufaddrhi_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flinprog : 1;
        unsigned int ftstopped : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_CS_TOP_ETR_ETR_FFSR_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_FFSR_flinprog_START (0)
#define SOC_CS_TOP_ETR_ETR_FFSR_flinprog_END (0)
#define SOC_CS_TOP_ETR_ETR_FFSR_ftstopped_START (1)
#define SOC_CS_TOP_ETR_ETR_FFSR_ftstopped_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enft : 1;
        unsigned int enti : 1;
        unsigned int reserved_0 : 2;
        unsigned int fonflin : 1;
        unsigned int fontrig : 1;
        unsigned int flushman : 1;
        unsigned int reserved_1 : 1;
        unsigned int trigontrigin : 1;
        unsigned int trigontrigevt : 1;
        unsigned int trigonfl : 1;
        unsigned int reserved_2 : 1;
        unsigned int stoponfl : 1;
        unsigned int stopontrigevt : 1;
        unsigned int reserved_3 : 18;
    } reg;
} SOC_CS_TOP_ETR_ETR_FFCR_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_FFCR_enft_START (0)
#define SOC_CS_TOP_ETR_ETR_FFCR_enft_END (0)
#define SOC_CS_TOP_ETR_ETR_FFCR_enti_START (1)
#define SOC_CS_TOP_ETR_ETR_FFCR_enti_END (1)
#define SOC_CS_TOP_ETR_ETR_FFCR_fonflin_START (4)
#define SOC_CS_TOP_ETR_ETR_FFCR_fonflin_END (4)
#define SOC_CS_TOP_ETR_ETR_FFCR_fontrig_START (5)
#define SOC_CS_TOP_ETR_ETR_FFCR_fontrig_END (5)
#define SOC_CS_TOP_ETR_ETR_FFCR_flushman_START (6)
#define SOC_CS_TOP_ETR_ETR_FFCR_flushman_END (6)
#define SOC_CS_TOP_ETR_ETR_FFCR_trigontrigin_START (8)
#define SOC_CS_TOP_ETR_ETR_FFCR_trigontrigin_END (8)
#define SOC_CS_TOP_ETR_ETR_FFCR_trigontrigevt_START (9)
#define SOC_CS_TOP_ETR_ETR_FFCR_trigontrigevt_END (9)
#define SOC_CS_TOP_ETR_ETR_FFCR_trigonfl_START (10)
#define SOC_CS_TOP_ETR_ETR_FFCR_trigonfl_END (10)
#define SOC_CS_TOP_ETR_ETR_FFCR_stoponfl_START (12)
#define SOC_CS_TOP_ETR_ETR_FFCR_stoponfl_END (12)
#define SOC_CS_TOP_ETR_ETR_FFCR_stopontrigevt_START (13)
#define SOC_CS_TOP_ETR_ETR_FFCR_stopontrigevt_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pscount : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_CS_TOP_ETR_ETR_FSCR_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_FSCR_pscount_START (0)
#define SOC_CS_TOP_ETR_ETR_FSCR_pscount_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int key : 32;
    } reg;
} SOC_CS_TOP_ETR_ETR_LAR_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_LAR_key_START (0)
#define SOC_CS_TOP_ETR_ETR_LAR_key_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sli : 1;
        unsigned int slk : 1;
        unsigned int ntt : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_CS_TOP_ETR_ETR_LSR_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_LSR_sli_START (0)
#define SOC_CS_TOP_ETR_ETR_LSR_sli_END (0)
#define SOC_CS_TOP_ETR_ETR_LSR_slk_START (1)
#define SOC_CS_TOP_ETR_ETR_LSR_slk_END (1)
#define SOC_CS_TOP_ETR_ETR_LSR_ntt_START (2)
#define SOC_CS_TOP_ETR_ETR_LSR_ntt_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nsid : 2;
        unsigned int nsnid : 2;
        unsigned int sid : 2;
        unsigned int snid : 2;
        unsigned int reserved : 24;
    } reg;
} SOC_CS_TOP_ETR_ETR_AUTHSTATUS_UNION;
#endif
#define SOC_CS_TOP_ETR_ETR_AUTHSTATUS_nsid_START (0)
#define SOC_CS_TOP_ETR_ETR_AUTHSTATUS_nsid_END (1)
#define SOC_CS_TOP_ETR_ETR_AUTHSTATUS_nsnid_START (2)
#define SOC_CS_TOP_ETR_ETR_AUTHSTATUS_nsnid_END (3)
#define SOC_CS_TOP_ETR_ETR_AUTHSTATUS_sid_START (4)
#define SOC_CS_TOP_ETR_ETR_AUTHSTATUS_sid_END (5)
#define SOC_CS_TOP_ETR_ETR_AUTHSTATUS_snid_START (6)
#define SOC_CS_TOP_ETR_ETR_AUTHSTATUS_snid_END (7)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
