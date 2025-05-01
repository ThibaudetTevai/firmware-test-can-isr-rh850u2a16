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
* Copyright (C) 2018, 2024 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name        : r_cg_intc_PE0.c
* Version          : 1.0.150
* Device(s)        : R7F702300BFABA
* Description      : None
***********************************************************************************************************************/
/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
#define R_Interrupt_Initialize_ForPE R_Interrupt_Initialize_ForPE0
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_userdefine.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
void R_Interrupt_Initialize_ForPE(void)
{
    /* Set INTOSTM0TINT setting */
    INTC2.EIC199.BIT.EIMK199 = _INT_PROCESSING_DISABLED;
    INTC2.EIC199.BIT.EIRF199 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC199.BIT.EITB199 = _INT_TABLE_VECTOR;
    INTC2.EIC199.UINT16 &= _INT_PRIORITY_LOWEST;
    INTC2.EIBD199.BIT.PEID = _INT_CPU_PE0;
    /* Set INTRLIN39UR0 setting */
    INTC2.EIC453.BIT.EIMK453 = _INT_PROCESSING_DISABLED;
    INTC2.EIC453.BIT.EIRF453 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC453.BIT.EITB453 = _INT_TABLE_VECTOR;
    INTC2.EIC453.UINT16 &= _INT_PRIORITY_LOWEST;
    INTC2.EIBD453.BIT.PEID = _INT_CPU_PE0;
    /* Set INTRLIN39UR1 setting */
    INTC2.EIC454.BIT.EIMK454 = _INT_PROCESSING_DISABLED;
    INTC2.EIC454.BIT.EIRF454 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC454.BIT.EITB454 = _INT_TABLE_VECTOR;
    INTC2.EIC454.UINT16 &= _INT_PRIORITY_LOWEST;
    INTC2.EIBD454.BIT.PEID = _INT_CPU_PE0;
    /* Set INTRLIN39UR2 setting */
    INTC2.EIC455.BIT.EIMK455 = _INT_PROCESSING_DISABLED;
    INTC2.EIC455.BIT.EIRF455 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC455.BIT.EITB455 = _INT_TABLE_VECTOR;
    INTC2.EIC455.UINT16 &= _INT_PRIORITY_LOWEST;
    INTC2.EIBD455.BIT.PEID = _INT_CPU_PE0;

    INTC2.EIC298.BIT.EIMK298 = _INT_PROCESSING_DISABLED;
    INTC2.EIC298.BIT.EIRF298 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC298.BIT.EITB298 = _INT_TABLE_VECTOR;
    INTC2.EIC298.UINT16 &= _INT_PRIORITY_LEVEL7;
    INTC2.EIBD298.BIT.PEID = _INT_CPU_PE0;

    INTC2.EIC299.BIT.EIMK299 = _INT_PROCESSING_DISABLED;
    INTC2.EIC299.BIT.EIRF299 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC299.BIT.EITB299 = _INT_TABLE_VECTOR;
    INTC2.EIC299.UINT16 &= _INT_PRIORITY_LEVEL5;
    INTC2.EIBD299.BIT.PEID = _INT_CPU_PE0;

    INTC2.EIC300.BIT.EIMK300 = _INT_PROCESSING_ENABLED;
    INTC2.EIC300.BIT.EIRF300 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC300.BIT.EITB300 = _INT_TABLE_VECTOR;
    INTC2.EIC300.UINT16 &= _INT_PRIORITY_LEVEL4;
    INTC2.EIBD300.BIT.PEID = _INT_CPU_PE0;

    INTC2.EIC301.BIT.EIMK301 = _INT_PROCESSING_DISABLED;
    INTC2.EIC301.BIT.EIRF301 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC301.BIT.EITB301 = _INT_TABLE_VECTOR;
    INTC2.EIC301.UINT16 &= _INT_PRIORITY_LEVEL3;
    INTC2.EIBD301.BIT.PEID = _INT_CPU_PE0;

    INTC2.EIC302.BIT.EIMK302 = _INT_PROCESSING_ENABLED;
    INTC2.EIC302.BIT.EIRF302 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC302.BIT.EITB302 = _INT_TABLE_VECTOR;
    INTC2.EIC302.UINT16 &= _INT_PRIORITY_LEVEL2;
    INTC2.EIBD302.BIT.PEID = _INT_CPU_PE0;

    INTC2.EIC303.BIT.EIMK303 = _INT_PROCESSING_DISABLED;
    INTC2.EIC303.BIT.EIRF303 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC303.BIT.EITB303 = _INT_TABLE_VECTOR;
    INTC2.EIC303.UINT16 &= _INT_PRIORITY_LEVEL1;
    INTC2.EIBD303.BIT.PEID = _INT_CPU_PE0;

    
}
