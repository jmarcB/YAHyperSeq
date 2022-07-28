/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1827
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set NA1 aliases
#define NA1_TRIS                 TRISAbits.TRISA0
#define NA1_LAT                  LATAbits.LATA0
#define NA1_PORT                 PORTAbits.RA0
#define NA1_ANS                  ANSELAbits.ANSA0
#define NA1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define NA1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define NA1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define NA1_GetValue()           PORTAbits.RA0
#define NA1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define NA1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define NA1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define NA1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set IN_PA_POWER aliases
#define IN_PA_POWER_TRIS                 TRISAbits.TRISA2
#define IN_PA_POWER_LAT                  LATAbits.LATA2
#define IN_PA_POWER_PORT                 PORTAbits.RA2
#define IN_PA_POWER_ANS                  ANSELAbits.ANSA2
#define IN_PA_POWER_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IN_PA_POWER_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IN_PA_POWER_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IN_PA_POWER_GetValue()           PORTAbits.RA2
#define IN_PA_POWER_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IN_PA_POWER_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IN_PA_POWER_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define IN_PA_POWER_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set IN_SUPPLY_VOLTAGE aliases
#define IN_SUPPLY_VOLTAGE_TRIS                 TRISAbits.TRISA3
#define IN_SUPPLY_VOLTAGE_LAT                  LATAbits.LATA3
#define IN_SUPPLY_VOLTAGE_PORT                 PORTAbits.RA3
#define IN_SUPPLY_VOLTAGE_ANS                  ANSELAbits.ANSA3
#define IN_SUPPLY_VOLTAGE_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define IN_SUPPLY_VOLTAGE_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define IN_SUPPLY_VOLTAGE_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define IN_SUPPLY_VOLTAGE_GetValue()           PORTAbits.RA3
#define IN_SUPPLY_VOLTAGE_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define IN_SUPPLY_VOLTAGE_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define IN_SUPPLY_VOLTAGE_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define IN_SUPPLY_VOLTAGE_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set IN_PTT aliases
#define IN_PTT_TRIS                 TRISAbits.TRISA4
#define IN_PTT_LAT                  LATAbits.LATA4
#define IN_PTT_PORT                 PORTAbits.RA4
#define IN_PTT_ANS                  ANSELAbits.ANSA4
#define IN_PTT_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define IN_PTT_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define IN_PTT_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define IN_PTT_GetValue()           PORTAbits.RA4
#define IN_PTT_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define IN_PTT_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define IN_PTT_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define IN_PTT_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set IO_RB0 aliases
#define IO_RB0_TRIS                 TRISBbits.TRISB0
#define IO_RB0_LAT                  LATBbits.LATB0
#define IO_RB0_PORT                 PORTBbits.RB0
#define IO_RB0_WPU                  WPUBbits.WPUB0
#define IO_RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_RB0_GetValue()           PORTBbits.RB0
#define IO_RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_RB0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_RB0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)

// get/set OUT_TEST_SWITCH aliases
#define OUT_TEST_SWITCH_TRIS                 TRISBbits.TRISB1
#define OUT_TEST_SWITCH_LAT                  LATBbits.LATB1
#define OUT_TEST_SWITCH_PORT                 PORTBbits.RB1
#define OUT_TEST_SWITCH_WPU                  WPUBbits.WPUB1
#define OUT_TEST_SWITCH_ANS                  ANSELBbits.ANSB1
#define OUT_TEST_SWITCH_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define OUT_TEST_SWITCH_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define OUT_TEST_SWITCH_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define OUT_TEST_SWITCH_GetValue()           PORTBbits.RB1
#define OUT_TEST_SWITCH_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define OUT_TEST_SWITCH_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define OUT_TEST_SWITCH_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define OUT_TEST_SWITCH_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define OUT_TEST_SWITCH_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define OUT_TEST_SWITCH_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set IN_TEST_SWP1 aliases
#define IN_TEST_SWP1_TRIS                 TRISBbits.TRISB2
#define IN_TEST_SWP1_LAT                  LATBbits.LATB2
#define IN_TEST_SWP1_PORT                 PORTBbits.RB2
#define IN_TEST_SWP1_WPU                  WPUBbits.WPUB2
#define IN_TEST_SWP1_ANS                  ANSELBbits.ANSB2
#define IN_TEST_SWP1_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define IN_TEST_SWP1_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define IN_TEST_SWP1_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define IN_TEST_SWP1_GetValue()           PORTBbits.RB2
#define IN_TEST_SWP1_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define IN_TEST_SWP1_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define IN_TEST_SWP1_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define IN_TEST_SWP1_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define IN_TEST_SWP1_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define IN_TEST_SWP1_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set IN_TEST_SWP2 aliases
#define IN_TEST_SWP2_TRIS                 TRISBbits.TRISB3
#define IN_TEST_SWP2_LAT                  LATBbits.LATB3
#define IN_TEST_SWP2_PORT                 PORTBbits.RB3
#define IN_TEST_SWP2_WPU                  WPUBbits.WPUB3
#define IN_TEST_SWP2_ANS                  ANSELBbits.ANSB3
#define IN_TEST_SWP2_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IN_TEST_SWP2_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IN_TEST_SWP2_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IN_TEST_SWP2_GetValue()           PORTBbits.RB3
#define IN_TEST_SWP2_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IN_TEST_SWP2_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IN_TEST_SWP2_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IN_TEST_SWP2_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IN_TEST_SWP2_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define IN_TEST_SWP2_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set SEQ1 aliases
#define SEQ1_TRIS                 TRISBbits.TRISB4
#define SEQ1_LAT                  LATBbits.LATB4
#define SEQ1_PORT                 PORTBbits.RB4
#define SEQ1_WPU                  WPUBbits.WPUB4
#define SEQ1_ANS                  ANSELBbits.ANSB4
#define SEQ1_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SEQ1_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SEQ1_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SEQ1_GetValue()           PORTBbits.RB4
#define SEQ1_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SEQ1_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SEQ1_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SEQ1_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SEQ1_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define SEQ1_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set SEQ2 aliases
#define SEQ2_TRIS                 TRISBbits.TRISB5
#define SEQ2_LAT                  LATBbits.LATB5
#define SEQ2_PORT                 PORTBbits.RB5
#define SEQ2_WPU                  WPUBbits.WPUB5
#define SEQ2_ANS                  ANSELBbits.ANSB5
#define SEQ2_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define SEQ2_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define SEQ2_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define SEQ2_GetValue()           PORTBbits.RB5
#define SEQ2_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define SEQ2_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define SEQ2_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define SEQ2_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define SEQ2_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define SEQ2_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set SEQ4 aliases
#define SEQ4_TRIS                 TRISBbits.TRISB6
#define SEQ4_LAT                  LATBbits.LATB6
#define SEQ4_PORT                 PORTBbits.RB6
#define SEQ4_WPU                  WPUBbits.WPUB6
#define SEQ4_ANS                  ANSELBbits.ANSB6
#define SEQ4_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define SEQ4_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define SEQ4_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define SEQ4_GetValue()           PORTBbits.RB6
#define SEQ4_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define SEQ4_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define SEQ4_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define SEQ4_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define SEQ4_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define SEQ4_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set SEQ3 aliases
#define SEQ3_TRIS                 TRISBbits.TRISB7
#define SEQ3_LAT                  LATBbits.LATB7
#define SEQ3_PORT                 PORTBbits.RB7
#define SEQ3_WPU                  WPUBbits.WPUB7
#define SEQ3_ANS                  ANSELBbits.ANSB7
#define SEQ3_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define SEQ3_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define SEQ3_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define SEQ3_GetValue()           PORTBbits.RB7
#define SEQ3_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define SEQ3_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define SEQ3_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define SEQ3_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define SEQ3_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define SEQ3_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF0 pin functionality
 * @Example
    IOCBF0_ISR();
 */
void IOCBF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_InterruptHandler);

*/
extern void (*IOCBF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_DefaultInterruptHandler);

*/
void IOCBF0_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/