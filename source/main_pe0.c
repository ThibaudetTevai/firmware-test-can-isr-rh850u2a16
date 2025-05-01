/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2024 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name        : main_pe0.c
* Component Version: 1.0.0
* Description      : Main function for PE0 core.
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "inc\common.h"
#include "shared.h"

#include "SmartConfigurator\general\r_cg_macrodriver.h"
#include "drivers\stbc_iohold\r_stbc_iohold.h"
#include "modules\canfd\r_canfd.h"

/***********************************************************************************************************************
Defines
***********************************************************************************************************************/
#if defined (__ICCRH850__)
#define main main_pe0
#endif

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/

/***********************************************************************************************************************
* Function Name: callback_1ms
* Description  : System tick callback triggered every millisecond by OSTM timer
* Arguments    : None
* Return Value : None
* Notes       : - Used for system-wide timing and task scheduling
***********************************************************************************************************************/
void callback_1ms(void)
{
}

/***********************************************************************************************************************
* Function Name: Pe0PeripheralInit
* Description  : Initializes core peripherals for PE0 processor
* Arguments    : None
* Return Value : None
* Notes       : - Must be called before enabling interrupts
*             : - Initializes OSTM0 timer, LIN, and CANFD interfaces
***********************************************************************************************************************/
void Pe0PeripheralInit(void)
{
    R_CANFD_Init();      /* Initialize CAN-FD communication */
}

/***********************************************************************************************************************
* Function Name: Pe0SystemStatusInit
* Description  : Initializes system status structure with default values
* Arguments    : None
* Return Value : None
* Notes       : - Called after reset, but not after DeepSTOP wakeup
*             : - Maintains system state information shared between cores
***********************************************************************************************************************/
void Pe0SystemStatusInit(void)
{  
}

/***********************************************************************************************************************
* Function Name: main
* Description  : Main entry point for PE0 core
* Arguments    : argc - Number of command line arguments (unused)
*             : argv - Array of command line argument strings (unused)
* Return Value : Should never return
* Notes       : - Synchronizes with other cores at startup
*             : - Handles DeepSTOP recovery
*             : - Initializes peripherals and enables interrupts
*             : - Sets up UART shell interface
***********************************************************************************************************************/
int main(int argc, char *argv[])
{
     
    /* Handle reset condition detection */
    SYSCTRL.RESFC.UINT32 = 0x0000F5DD;  /* Clear reset flags */

    /* Initialize hardware and system services */
    Pe0PeripheralInit();

    /* Enable interrupts */
    __EI(); 
    
    R_CANFD_Test();
    /* should never reach this point */
    while(1);                          
}

/***********************************************************************************************************************
* Function Name: loop
* Description  : Main system task loop, called by shell handler
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void loop(void){
    
}
