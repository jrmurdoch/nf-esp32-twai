/*
//
// Copyright (c) .NET Foundation and Contributors
// Portions Copyright (c) 2006..2018 Giovanni Di Sirio.  All rights reserved.
// See LICENSE file in the project root for full license information.
//
*/

/*
 * STM32L475xG memory setup.
 */
MEMORY
{
    flash0     (rx) : org = 0x08008000, len = 1M - 700k - 32k - 4k   /* space reserved for nanoBooter (1st two sectors 0x08000000 to 0x08008000)*/
    flash1     (rx) : org = 0x00000000, len = 0
    flash2     (rx) : org = 0x00000000, len = 0
    flash3     (rx) : org = 0x00000000, len = 0
    flash4     (rx) : org = 0x00000000, len = 0
    flash5     (rx) : org = 0x00000000, len = 0
    flash6     (rx) : org = 0x00000000, len = 0
    flash7     (rx) : org = 0x00000000, len = 0
    config     (rw) : org = 0x080FF000, len = 4k                     /* space reserved for configuration block */
    deployment (rx) : org = 0x0804F800, len = 700k                   /* space reserved for application deployment */
    ramvt      (wx) : org = 0x00000000, len = 0                      /* initial RAM address is reserved for a copy of the vector table */
    ram0       (wx) : org = 0x20000030, len = 96k-48                 /* SRAM1 */
    ram1       (wx) : org = 0x00000000, len = 0    
    ram2       (wx) : org = 0x00000000, len = 0     
    ram3       (wx) : org = 0x00000000, len = 0     
    ram4       (wx) : org = 0x10000000, len = 32k                    /* CCM SRAM */
    ram5       (wx) : org = 0x00000000, len = 0       
    ram6       (wx) : org = 0x00000000, len = 0
    ram7       (wx) : org = 0x00000000, len = 0
    bootclpbrd (wx) : org = 0x20000000, len = 48                     /* boot clipboard area */
}

/* For each data/text section two region are defined, a virtual region
   and a load region (_LMA suffix).*/

/* Flash region to be used for exception vectors.*/
REGION_ALIAS("VECTORS_FLASH", flash0);
REGION_ALIAS("VECTORS_FLASH_LMA", flash0);

/* Flash region to be used for constructors and destructors.*/
REGION_ALIAS("XTORS_FLASH", flash0);
REGION_ALIAS("XTORS_FLASH_LMA", flash0);

/* Flash region to be used for code text.*/
REGION_ALIAS("TEXT_FLASH", flash0);
REGION_ALIAS("TEXT_FLASH_LMA", flash0);

/* Flash region to be used for read only data.*/
REGION_ALIAS("RODATA_FLASH", flash0);
REGION_ALIAS("RODATA_FLASH_LMA", flash0);

/* Flash region to be used for various.*/
REGION_ALIAS("VARIOUS_FLASH", flash0);
REGION_ALIAS("VARIOUS_FLASH_LMA", flash0);

/* Flash region to be used for RAM(n) initialization data.*/
REGION_ALIAS("RAM_INIT_FLASH_LMA", flash0);

/* RAM region to be used for Main stack. This stack accommodates the processing
   of all exceptions and interrupts.*/
REGION_ALIAS("MAIN_STACK_RAM", ram0);

/* RAM region to be used for the process stack. This is the stack used by
   the main() function.*/
REGION_ALIAS("PROCESS_STACK_RAM", ram0);

/* RAM region to be used for data segment.*/
REGION_ALIAS("DATA_RAM", ram0);
REGION_ALIAS("DATA_RAM_LMA", flash0);

/* RAM region to be used for BSS segment.*/
REGION_ALIAS("BSS_RAM", ram0);

/* RAM region to be used for the default heap.*/
REGION_ALIAS("HEAP_RAM", ram4);

/* RAM region to be used for the nanoFramework CLR managed heap.*/
REGION_ALIAS("CLR_MANAGED_HEAP_RAM", ram0);

/* RAM region to be used for the boot clipboard.*/
REGION_ALIAS("SECTION_FOR_BOOTCLIPBOARD", bootclpbrd);

INCLUDE rules.ld

/* Set the RAM segment used end for threadx */
__RAM_segment_used_end__ = 0; 
