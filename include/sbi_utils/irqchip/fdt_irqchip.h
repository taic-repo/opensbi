/*
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * Copyright (c) 2020 Western Digital Corporation or its affiliates.
 *
 * Authors:
 *   Anup Patel <anup.patel@wdc.com>
 */

#ifndef __FDT_IRQCHIP_H__
#define __FDT_IRQCHIP_H__

#include <sbi/sbi_types.h>

#ifdef CONFIG_FDT_IRQCHIP

struct fdt_irqchip {
	const struct fdt_match *match_table;
	int (*cold_init)(const void *fdt, int nodeoff, const struct fdt_match *match);
};

int fdt_irqchip_init(void);

#else

static inline int fdt_irqchip_init(void) { return 0; }

#endif

#endif
