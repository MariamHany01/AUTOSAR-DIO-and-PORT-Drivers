/*
 * Module:Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description :Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 *  Author: Mariam Bestawrous
 */

#include"Port.h"
#include "Port_PBcfg.h"
/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)


/* AUTOSAR Version checking between port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between PORT_PBcfg.c and PORT.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

///* PB structure used with PORT_Init API */
 Port_ConfigType port_config[TOTAL_NUMBER_OF_PINS] = {
     {PORTA,PIN0,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTA,PIN1,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTA,PIN2,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTA,PIN3,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTA,PIN4,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTA,PIN5,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTA,PIN6,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTA,PIN7,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,

     {PORTB,PIN0,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTB,PIN1,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTB,PIN2,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTB,PIN3,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTB,PIN4,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTB,PIN5,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTB,PIN6,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTB,PIN7,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,


     {PORTC,PIN4,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTC,PIN5,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTC,PIN6,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTC,PIN7,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,

     {PORTD,PIN0,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTD,PIN1,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTD,PIN2,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTD,PIN3,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTD,PIN4,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTD,PIN5,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTD,PIN6,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTD,PIN7,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,

     {PORTE,PIN0,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTE,PIN1,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTE,PIN2,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTE,PIN3,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTE,PIN4,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTE,PIN5,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,

     {PORTF,PIN0,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_OFF} ,
     {PORTF,PIN1,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_OFF} , /*led*/
     {PORTF,PIN2,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTF,PIN3,OUTPUT,DEFAULT_GPIO_MODE,OFF,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,
     {PORTF,PIN4,INPUT,DEFAULT_GPIO_MODE,PULL_UP,STD_LOW,DIGITAL,DISABLE_OPEN_DRAIN,STD_ON} ,/*switch1*/
 };


