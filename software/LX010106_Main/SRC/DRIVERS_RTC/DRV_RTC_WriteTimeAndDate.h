/*                                                                            */
/* Project N�  :  RB0505                                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* Filename  : DRV_RTC_WriteTimeAndDate.h */
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C                     Functionnal description :                            */
/*%C                  */
/******************************************************************************/
/*%I Input Parameter :  NONE                                            */
/*%IO Input/Output :    NONE	                                              */
/*%O Output Parameter : NONE       */
/******************************************************************************/


#ifndef DRV_RTC_WRITETIMEANDDATE_H
#define DRV_RTC_WRITETIMEANDDATE_H

/******************************************************************************/
/*                     EXTERNAL FUNCTION DECLARATION                          */
/******************************************************************************/
extern BIT DRV_RTC_FIFO_PushOneData(UWORD16  * access_ptr_data
											  ,e_DRV_RTC_REGISTER access_register
											  ,e_DRV_RTC_ACCESS_STATE access_type);


#endif