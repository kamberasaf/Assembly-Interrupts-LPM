//*****************************************************************************
// File: bsp.h - Board Support Package Header for Interrupts and LPM Lab
// Authors: Asaf Kamber, Aviv Primor
// Course: Introduction to Computers - Lab 4
// Description: Definitions and constants for the MSP430 hardware configuration
//              Used across all modules for consistent hardware abstraction
//*****************************************************************************
#ifndef *bsp*H_           ; Start of include guard
#define *bsp*H_
#include <msp430g2553.h>  ; Include MSP430G2553 microcontroller definitions

;-------------------------------------------------------------------------------
; Constants
;-------------------------------------------------------------------------------
#define  DebounceVal  280 ; Delay value for push button debouncing
#define  Delay62_5ms  0xFFFF ; Delay value for approximately 62.5ms

;-------------------------------------------------------------------------------
; LED Configuration - P1 Port
;-------------------------------------------------------------------------------
#define  LedsPort     &P1OUT ; LED output register
#define  LedsPortDIR  &P1DIR ; LED direction register
#define  LedsPortSEL  &P1SEL ; LED function select register

;-------------------------------------------------------------------------------
; Switch Configuration (Commented out - not used in this lab)
;-------------------------------------------------------------------------------
;#define   SWPort      &P1IN
;#define   SWDIR       &P1DIR
;#define   SWSEL       &P1SEL

;-------------------------------------------------------------------------------
; Push Button Configuration - P2 Port
;-------------------------------------------------------------------------------
#define   PBPort      &P2IN    ; Push button input register
#define   PBDIR       &P2DIR   ; Push button direction register
#define   PBSEL       &P2SEL   ; Push button function select register
#define   PBEdgeT     &P2IES   ; Push button interrupt edge select
#define   PBIntEn     &P2IE    ; Push button interrupt enable
#define   PBIntFlag   &P2IFG   ; Push button interrupt flag

;-------------------------------------------------------------------------------
; PWM Configuration - P2.7
;-------------------------------------------------------------------------------
#define   PWMPort     &P2OUT   ; PWM output register (P2.7)

#endif                        ; End of include guard