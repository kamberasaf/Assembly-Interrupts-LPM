#ifndef _bsp_H_  ;if not defined
#define _bsp_H_

#include <msp430g2553.h>

#define  DebounceVal  280
#define  Delay62_5ms  0xFFFF

;--- Leds ---
#define  LedsPort     &P1OUT
#define  LedsPortDIR  &P1DIR
#define  LedsPortSEL  &P1SEL


;--- Switches ---
;#define   SWPort      &P1IN
;#define   SWDIR       &P1DIR
;#define   SWSEL       &P1SEL


;--- Push Buttons ---
#define   PBPort      &P2IN
#define   PBDIR       &P2DIR
#define   PBSEL       &P2SEL
#define   PBEdgeT     &P2IES  ; falling or rising edge
#define   PBIntEn     &P2IE   
#define   PBIntFlag   &P2IFG


;----- PWM -----------
#define   PWMPort     &P2OUT


#endif