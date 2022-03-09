#pragma once
/*****************************************************/
/* File   : MemIf_NvM.h                              */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_MemIf.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class infMemIf_NvM{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      virtual FUNC(void, MEMIF_CODE) Cancel (void) = 0;
      virtual FUNC(void, MEMIF_CODE) Read   (void) = 0;
      virtual FUNC(void, MEMIF_CODE) Write  (void) = 0;
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern infMemIf_NvM* gptrinfMemIf_NvM;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

