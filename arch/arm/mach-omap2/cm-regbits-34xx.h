#ifndef __ARCH_ARM_MACH_OMAP2_CM_REGBITS_34XX_H
#define __ARCH_ARM_MACH_OMAP2_CM_REGBITS_34XX_H

/*
 * OMAP3430 Clock Management register bits
 *
 * Copyright (C) 2007-2008 Texas Instruments, Inc.
 * Copyright (C) 2007-2008 Nokia Corporation
 *
 * Written by Paul Walmsley
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#define OMAP3430ES2_EN_MMC3_SHIFT			30
#define OMAP3430_EN_MSPRO_SHIFT				23
#define OMAP3430_EN_HDQ_SHIFT				22
#define OMAP3430ES1_EN_FSHOSTUSB_SHIFT			5
#define OMAP3430ES1_EN_D2D_SHIFT			3
#define OMAP3430_EN_SSI_SHIFT				0
#define OMAP3430ES2_EN_USBTLL_SHIFT			2
#define OMAP3430_EN_WDT2_SHIFT				5
#define OMAP3430_EN_CAM_SHIFT				0
#define OMAP3430_EN_WDT3_SHIFT				12
#define OMAP3430_CM_FCLKEN_IVA2_EN_IVA2_MASK		(1 << 0)
#define OMAP3430_CM_FCLKEN_IVA2_EN_IVA2_SHIFT		0
#define OMAP3430_IVA2_DPLL_FREQSEL_SHIFT		4
#define OMAP3430_IVA2_DPLL_FREQSEL_MASK			(0xf << 4)
#define OMAP3430_EN_IVA2_DPLL_DRIFTGUARD_SHIFT		3
#define OMAP3430_EN_IVA2_DPLL_SHIFT			0
#define OMAP3430_EN_IVA2_DPLL_MASK			(0x7 << 0)
#define OMAP3430_ST_IVA2_SHIFT				0
#define OMAP3430_ST_IVA2_CLK_MASK			(1 << 0)
#define OMAP3430_AUTO_IVA2_DPLL_SHIFT			0
#define OMAP3430_AUTO_IVA2_DPLL_MASK			(0x7 << 0)
#define OMAP3430_IVA2_CLK_SRC_SHIFT			19
#define OMAP3430_IVA2_CLK_SRC_WIDTH			3
#define OMAP3430_IVA2_DPLL_MULT_MASK			(0x7ff << 8)
#define OMAP3430_IVA2_DPLL_DIV_MASK			(0x7f << 0)
#define OMAP3430_IVA2_DPLL_CLKOUT_DIV_SHIFT		0
#define OMAP3430_IVA2_DPLL_CLKOUT_DIV_WIDTH		5
#define OMAP3430_CLKTRCTRL_IVA2_MASK			(0x3 << 0)
#define OMAP3430_CLKACTIVITY_IVA2_MASK			(1 << 0)
#define OMAP3430_MPU_DPLL_FREQSEL_MASK			(0xf << 4)
#define OMAP3430_EN_MPU_DPLL_DRIFTGUARD_SHIFT		3
#define OMAP3430_EN_MPU_DPLL_MASK			(0x7 << 0)
#define OMAP3430_ST_MPU_CLK_SHIFT			0
#define OMAP3430_ST_MPU_CLK_MASK			(1 << 0)
#define OMAP3430_ST_MPU_CLK_WIDTH			1
#define OMAP3430_AUTO_MPU_DPLL_MASK			(0x7 << 0)
#define OMAP3430_MPU_CLK_SRC_SHIFT			19
#define OMAP3430_MPU_CLK_SRC_WIDTH			3
#define OMAP3430_MPU_DPLL_MULT_MASK			(0x7ff << 8)
#define OMAP3430_MPU_DPLL_DIV_MASK			(0x7f << 0)
#define OMAP3430_MPU_DPLL_CLKOUT_DIV_SHIFT		0
#define OMAP3430_MPU_DPLL_CLKOUT_DIV_WIDTH		5
#define OMAP3430_CLKTRCTRL_MPU_MASK			(0x3 << 0)
#define OMAP3430_EN_MODEM_SHIFT				31
#define OMAP3430_EN_ICR_SHIFT				29
#define OMAP3430_EN_AES2_SHIFT				28
#define OMAP3430_EN_SHA12_SHIFT				27
#define OMAP3430_EN_DES2_SHIFT				26
#define OMAP3430ES1_EN_FAC_SHIFT			8
#define OMAP3430_EN_MAILBOXES_SHIFT			7
#define OMAP3430_EN_OMAPCTRL_SHIFT			6
#define OMAP3430_EN_SAD2D_SHIFT				3
#define OMAP3430_EN_SDRC_SHIFT				1
#define AM35XX_EN_IPSS_SHIFT				4
#define OMAP3430_EN_PKA_SHIFT				4
#define OMAP3430_EN_AES1_SHIFT				3
#define OMAP3430_EN_RNG_SHIFT				2
#define OMAP3430_EN_SHA11_SHIFT				1
#define OMAP3430_EN_DES1_SHIFT				0
#define OMAP3430_EN_MAD2D_SHIFT				3
#define OMAP3430ES2_EN_TS_SHIFT				1
#define OMAP3430ES2_EN_CPEFUSE_SHIFT			0
#define OMAP3430_ST_AES2_SHIFT				28
#define OMAP3430_ST_SHA12_SHIFT				27
#define AM35XX_ST_UART4_SHIFT				23
#define OMAP3430_ST_HDQ_SHIFT				22
#define OMAP3430ES2_ST_SSI_IDLE_SHIFT			8
#define OMAP3430_ST_MAILBOXES_SHIFT			7
#define OMAP3430_ST_SAD2D_SHIFT				3
#define OMAP3430_ST_SDMA_SHIFT				2
#define AM35XX_ST_IPSS_SHIFT				5
#define OMAP3430ES2_ST_USBTLL_SHIFT			2
#define OMAP3430_CLKSEL_SSI_MASK			(0xf << 8)
#define OMAP3430_CLKSEL_GPT11_MASK			(1 << 7)
#define OMAP3430_CLKSEL_GPT10_MASK			(1 << 6)
#define OMAP3430ES1_CLKSEL_FSHOSTUSB_MASK		(0x3 << 4)
#define OMAP3430_CLKSEL_L4_SHIFT			2
#define OMAP3430_CLKSEL_L4_WIDTH			2
#define OMAP3430_CLKSEL_L3_SHIFT			0
#define OMAP3430_CLKSEL_L3_WIDTH			2
#define OMAP3630_CLKSEL_96M_MASK			(0x3 << 12)
#define OMAP3430ES1_CLKTRCTRL_D2D_MASK			(0x3 << 4)
#define OMAP3430_CLKTRCTRL_L4_MASK			(0x3 << 2)
#define OMAP3430_CLKTRCTRL_L3_MASK			(0x3 << 0)
#define OMAP3430ES1_EN_3D_SHIFT				2
#define OMAP3430ES1_EN_2D_SHIFT				1
#define OMAP3430ES1_CLKTRCTRL_GFX_MASK			(0x3 << 0)
#define OMAP3430ES2_CM_FCLKEN_SGX_EN_SGX_SHIFT		1
#define OMAP3430ES2_CM_ICLKEN_SGX_EN_SGX_SHIFT		0
#define OMAP3430ES2_CLKSEL_SGX_MASK			(0x7 << 0)
#define OMAP3430ES2_CLKTRCTRL_SGX_MASK			(0x3 << 0)
#define OMAP3430ES2_EN_USIMOCP_SHIFT			9
#define OMAP3430_EN_WDT1_SHIFT				4
#define OMAP3430_EN_32KSYNC_SHIFT			2
#define OMAP3430_ST_WDT2_SHIFT				5
#define OMAP3430_ST_32KSYNC_SHIFT			2
#define OMAP3430ES2_CLKSEL_USIMOCP_MASK			(0xf << 3)
#define OMAP3430_CLKSEL_RM_SHIFT			1
#define OMAP3430_CLKSEL_RM_WIDTH			2
#define OMAP3430_CLKSEL_GPT1_MASK			(1 << 0)
#define OMAP3430_PWRDN_EMU_PERIPH_SHIFT			31
#define OMAP3430_PWRDN_CAM_SHIFT			30
#define OMAP3430_PWRDN_DSS1_SHIFT			29
#define OMAP3430_PWRDN_TV_SHIFT				28
#define OMAP3430_PWRDN_96M_SHIFT			27
#define OMAP3430_PERIPH_DPLL_FREQSEL_MASK		(0xf << 20)
#define OMAP3430_EN_PERIPH_DPLL_DRIFTGUARD_SHIFT	19
#define OMAP3430_EN_PERIPH_DPLL_MASK			(0x7 << 16)
#define OMAP3430_PWRDN_EMU_CORE_SHIFT			12
#define OMAP3430_CORE_DPLL_FREQSEL_MASK			(0xf << 4)
#define OMAP3430_EN_CORE_DPLL_DRIFTGUARD_SHIFT		3
#define OMAP3430_EN_CORE_DPLL_MASK			(0x7 << 0)
#define OMAP3430ES2_PERIPH2_DPLL_FREQSEL_MASK		(0xf << 4)
#define OMAP3430ES2_EN_PERIPH2_DPLL_DRIFTGUARD_SHIFT	3
#define OMAP3430ES2_EN_PERIPH2_DPLL_MASK		(0x7 << 0)
#define OMAP3430_ST_PERIPH_CLK_MASK			(1 << 1)
#define OMAP3430_ST_CORE_CLK_MASK			(1 << 0)
#define OMAP3430ES2_ST_PERIPH2_CLK_MASK			(1 << 0)
#define OMAP3430_AUTO_PERIPH_DPLL_MASK			(0x7 << 3)
#define OMAP3430_AUTO_CORE_DPLL_MASK			(0x7 << 0)
#define OMAP3430ES2_AUTO_PERIPH2_DPLL_MASK		(0x7 << 0)
#define OMAP3430_CORE_DPLL_CLKOUT_DIV_SHIFT		27
#define OMAP3430_CORE_DPLL_CLKOUT_DIV_WIDTH		5
#define OMAP3430_CORE_DPLL_MULT_MASK			(0x7ff << 16)
#define OMAP3430_CORE_DPLL_DIV_MASK			(0x7f << 8)
#define OMAP3430_SOURCE_96M_SHIFT			6
#define OMAP3430_SOURCE_96M_WIDTH			1
#define OMAP3430_SOURCE_54M_SHIFT			5
#define OMAP3430_SOURCE_54M_WIDTH			1
#define OMAP3430_SOURCE_48M_MASK			(1 << 3)
#define OMAP3430_PERIPH_DPLL_MULT_MASK			(0x7ff << 8)
#define OMAP3630_PERIPH_DPLL_MULT_MASK			(0xfff << 8)
#define OMAP3430_PERIPH_DPLL_DIV_MASK			(0x7f << 0)
#define OMAP3630_PERIPH_DPLL_DCO_SEL_MASK		(0x7 << 21)
#define OMAP3630_PERIPH_DPLL_SD_DIV_MASK		(0xff << 24)
#define OMAP3430_DIV_96M_SHIFT				0
#define OMAP3630_DIV_96M_WIDTH				6
#define OMAP3430ES2_PERIPH2_DPLL_MULT_MASK		(0x7ff << 8)
#define OMAP3430ES2_PERIPH2_DPLL_DIV_MASK		(0x7f << 0)
#define OMAP3430ES2_DIV_120M_SHIFT			0
#define OMAP3430ES2_DIV_120M_WIDTH			5
#define OMAP3430_CLKOUT2_EN_SHIFT			7
#define OMAP3430_CLKOUT2_DIV_SHIFT			3
#define OMAP3430_CLKOUT2_DIV_WIDTH			3
#define OMAP3430_CLKOUT2SOURCE_MASK			(0x3 << 0)
#define OMAP3430_EN_TV_SHIFT				2
#define OMAP3430_EN_DSS2_SHIFT				1
#define OMAP3430_EN_DSS1_SHIFT				0
#define OMAP3430_CM_ICLKEN_DSS_EN_DSS_SHIFT		0
#define OMAP3430ES2_ST_DSS_IDLE_SHIFT			1
#define OMAP3430ES2_ST_DSS_STDBY_SHIFT			0
#define OMAP3430ES1_ST_DSS_SHIFT			0
#define OMAP3430_CLKSEL_TV_SHIFT			8
#define OMAP3630_CLKSEL_TV_WIDTH			6
#define OMAP3430_CLKSEL_DSS1_SHIFT			0
#define OMAP3630_CLKSEL_DSS1_WIDTH			6
#define OMAP3430_CLKTRCTRL_DSS_MASK			(0x3 << 0)
#define OMAP3430_EN_CSI2_SHIFT				1
#define OMAP3430_CLKSEL_CAM_SHIFT			0
#define OMAP3630_CLKSEL_CAM_WIDTH			6
#define OMAP3430_CLKTRCTRL_CAM_MASK			(0x3 << 0)
#define OMAP3430_ST_MCBSP4_SHIFT			2
#define OMAP3430_ST_MCBSP3_SHIFT			1
#define OMAP3430_ST_MCBSP2_SHIFT			0
#define OMAP3430_CLKSEL_GPT9_MASK			(1 << 7)
#define OMAP3430_CLKSEL_GPT8_MASK			(1 << 6)
#define OMAP3430_CLKSEL_GPT7_MASK			(1 << 5)
#define OMAP3430_CLKSEL_GPT6_MASK			(1 << 4)
#define OMAP3430_CLKSEL_GPT5_MASK			(1 << 3)
#define OMAP3430_CLKSEL_GPT4_MASK			(1 << 2)
#define OMAP3430_CLKSEL_GPT3_MASK			(1 << 1)
#define OMAP3430_CLKSEL_GPT2_MASK			(1 << 0)
#define OMAP3430_CLKTRCTRL_PER_MASK			(0x3 << 0)
#define OMAP3430_DIV_DPLL4_SHIFT			24
#define OMAP3630_DIV_DPLL4_WIDTH			6
#define OMAP3430_DIV_DPLL3_SHIFT			16
#define OMAP3430_DIV_DPLL3_WIDTH			5
#define OMAP3430_CLKSEL_TRACECLK_SHIFT			11
#define OMAP3430_CLKSEL_TRACECLK_WIDTH			3
#define OMAP3430_CLKSEL_PCLK_SHIFT			8
#define OMAP3430_CLKSEL_PCLK_WIDTH			3
#define OMAP3430_CLKSEL_PCLKX2_SHIFT			6
#define OMAP3430_CLKSEL_PCLKX2_WIDTH			2
#define OMAP3430_CLKSEL_ATCLK_SHIFT			4
#define OMAP3430_CLKSEL_ATCLK_WIDTH			2
#define OMAP3430_TRACE_MUX_CTRL_SHIFT			2
#define OMAP3430_TRACE_MUX_CTRL_WIDTH			2
#define OMAP3430_MUX_CTRL_MASK				(0x3 << 0)
#define OMAP3430_CLKTRCTRL_EMU_MASK			(0x3 << 0)
#define OMAP3430_CLKTRCTRL_NEON_MASK			(0x3 << 0)
#define OMAP3430ES2_EN_USBHOST2_SHIFT			1
#define OMAP3430ES2_EN_USBHOST1_SHIFT			0
#define OMAP3430ES2_EN_USBHOST_SHIFT			0
#define OMAP3430ES2_ST_USBHOST_IDLE_SHIFT		1
#define OMAP3430ES2_ST_USBHOST_STDBY_SHIFT		0
#define OMAP3430ES2_CLKTRCTRL_USBHOST_MASK		(3 << 0)
#define OMAP34XX_CLKSTCTRL_DISABLE_AUTO		0x0
#define OMAP34XX_CLKSTCTRL_FORCE_SLEEP		0x1
#define OMAP34XX_CLKSTCTRL_FORCE_WAKEUP		0x2
#define OMAP34XX_CLKSTCTRL_ENABLE_AUTO		0x3
#endif
