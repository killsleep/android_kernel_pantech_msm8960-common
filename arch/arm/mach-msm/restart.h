/* Copyright (c) 2012,Motorola Mobility, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _ARCH_ARM_MACH_MSM_RESTART_H_
#define _ARCH_ARM_MACH_MSM_RESTART_H_

#define TEMP_BP_APR_NOTIF 1

#ifdef TEMP_BP_APR_NOTIF
extern void set_in_bp_panic(void);
#endif

#endif