/* STM32F1 Power Management for Solar Power

This header file contains defines and prototypes specific to the charging
task ICC algorithm.

Initial 02 September 2014

*/

/*
 * This file is part of the battery-management-system project.
 *
 * Copyright 2013 K. Sarkies <ksarkies@internode.on.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef POWER_MANAGEMENT_CHARGER_IC_H_
#define POWER_MANAGEMENT_CHARGER_IC_H_

#include <stdint.h>
#include <stdbool.h>

/* The period, 5 seconds, for the pulsed charging phase of the ICC algorithm */
#define SLOT_PERIOD     30*1024

/* Number of slots in the ICC algorithm for pulsed charging cycle. */
#define NUM_SLOTS       3

/*--------------------------------------------------------------------------*/
/* Prototypes */
/*--------------------------------------------------------------------------*/

void initLocalsIC(void);
void chargerControlIC(uint8_t battery);

#endif
