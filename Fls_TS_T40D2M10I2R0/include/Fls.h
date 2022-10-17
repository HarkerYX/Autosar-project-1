/**
*   @file    Fls.h
*   @implements Fls.h_Artifact
*   @version 1.0.2
*
*   @brief   AUTOSAR Fls - AUTOSAR Module Flash Driver.
*   @details Include all external API declarations and definitions of all pre-compile parameters.
*
*   @addtogroup FLS
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.3 MCAL
*   Platform             : ARM
*   Peripheral           : IPV_FTFE
*   Dependencies         : 
*
*   Autosar Version      : 4.3.1
*   Autosar Revision     : ASR_REL_4_3_REV_0001
*   Autosar Conf.Variant :
*   SW Version           : 1.0.2
*   Build Version        : S32K1XX_MCAL_1_0_2_RTM_ASR_REL_4_3_REV_0001_23-Apr-21
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017-2021 NXP
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifndef FLS_H
#define FLS_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section fls_h_REF_1
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that
* 31 character significance and case sensitivity are supported for external identifiers
* This violation is due to the requirement that requests to have a file version check.
*
* @section fls_h_REF_2
* Violates MISRA 2004 Required Rule 5.1,
* Identifiers (internal and external) shall not rely on the significance of more than 31 characters.
* The used compilers use more than 31 chars for identifiers.
* This violation is due to the requirement that requests to have a file version check.
*
* @section fls_h_REF_3
* Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to prevent the
* contents of a header being included twice.
* Because of Autosar requirement MEMMAP003 of memory mapping
*/

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcal.h"
#include "Fls_Cfg.h"
#include "Fls_Api.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLS_VENDOR_ID                    43
#define FLS_MODULE_ID                    92
#define FLS_AR_RELEASE_MAJOR_VERSION     4
#define FLS_AR_RELEASE_MINOR_VERSION     3
/*
* @violates @ref fls_h_REF_1 The compiler/linker
* shall be checked to ensure that 31 character significance and case sensitivity are supported
* for external identifiers
* @violates @ref fls_h_REF_2 Identifiers (internal and external)
* shall not rely on the significance of more than 31 characters.
*/
#define FLS_AR_RELEASE_REVISION_VERSION  1
#define FLS_SW_MAJOR_VERSION             1
#define FLS_SW_MINOR_VERSION             0
#define FLS_SW_PATCH_VERSION             2
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if header file and Mcal.h header file are of the same Autosar version */
    #if ((FLS_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (FLS_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION) \
        )
        #error "AutoSar Version Numbers of Fls.h and Mcal.h are different"
    #endif
#endif

/* Check if header file and Fls_Cfg.h header file are of the same Autosar version */
#if ((FLS_AR_RELEASE_MAJOR_VERSION != FLS_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (FLS_AR_RELEASE_MINOR_VERSION != FLS_AR_RELEASE_MINOR_VERSION_CFG) || \
     (FLS_AR_RELEASE_REVISION_VERSION != FLS_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Fls.h and Fls_Cfg.h are different"
#endif
/* Check if header file and Fls_Cfg.h header file are of the same vendor */
#if (FLS_VENDOR_ID != FLS_VENDOR_ID_CFG)
    #error "Fls.h and Fls_Cfg.h have different vendor ids"
#endif
/* Check if header file and Fls_Cfg.h header file are of the same software version */
#if ((FLS_SW_MAJOR_VERSION != FLS_SW_MAJOR_VERSION_CFG) || \
     (FLS_SW_MINOR_VERSION != FLS_SW_MINOR_VERSION_CFG) || \
     (FLS_SW_PATCH_VERSION != FLS_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of Fls.h and Fls_Cfg.h are different"
#endif

/* Check if header file and Fls_Api.h header file are of the same Autosar version */
#if ((FLS_AR_RELEASE_MAJOR_VERSION != FLS_API_AR_RELEASE_MAJOR_VERSION) || \
     (FLS_AR_RELEASE_MINOR_VERSION != FLS_API_AR_RELEASE_MINOR_VERSION) || \
     (FLS_AR_RELEASE_REVISION_VERSION != FLS_API_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Fls.h and Fls_Api.h are different"
#endif

/* Check if header file and Fls_Api.h header file are of the same vendor */
#if (FLS_VENDOR_ID != FLS_API_VENDOR_ID)
    #error "Fls.h and Fls_Api.h have different vendor ids"
#endif
/* Check if header file and Fls_Api.h header file are of the same software version */
#if ((FLS_SW_MAJOR_VERSION != FLS_API_SW_MAJOR_VERSION) || \
     (FLS_SW_MINOR_VERSION != FLS_API_SW_MINOR_VERSION) || \
     (FLS_SW_PATCH_VERSION != FLS_API_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Fls.h and Fls_Api.h are different"
#endif

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define FLS_START_SEC_VAR_INIT_UNSPECIFIED
/*
* @violates @ref fls_h_REF_1 The compiler/linker
* shall be checked to ensure that 31 character significance and case sensitivity are supported
* for external identifiers
* @violates @ref fls_h_REF_2 Identifiers (internal and external)
* shall not rely on the significance of more than 31 characters.
* @violates @ref fls_h_REF_3 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
*/
#include "Fls_MemMap.h"
/**
 * @brief Index of flash sector in group currently processed by erase job
 * @details Used by Erase job
 */
extern VAR( Fls_SectorIndexType, FLS_VAR) Fls_u32JobSectorItPos;

/**
 * @brief Index of last flash sector by current job
 * @details Used to check status of all external flash chips before start jobs
 * or is the last sector in Erase job
 */
extern VAR( Fls_SectorIndexType, FLS_VAR) Fls_u32JobSectorEndPos;

#define FLS_STOP_SEC_VAR_INIT_UNSPECIFIED
/*
* @violates @ref fls_h_REF_1 The compiler/linker
* shall be checked to ensure that 31 character significance and case sensitivity are supported
* for external identifiers
* @violates @ref fls_h_REF_2 Identifiers (internal and external)
* shall not rely on the significance of more than 31 characters.
* @violates @ref fls_h_REF_3 Precautions shall be taken
* in order to prevent the contents of a header being included twice.
*/
#include "Fls_MemMap.h"
#ifdef __cplusplus
}
#endif

#endif /* FLS_H */

/** @} */

