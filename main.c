
/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1827
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"



/*
                         Main application
 */
/*******************************
* typedefs
*******************************/

typedef enum {
STATE1,
STATE2,
STATE3
} state;
 
 state   currentState;
    
 /*
typedef enum {
   NILACTION,
   ACTION_1,
   ACTION_2,
   ACTION_3,
   ACTION_4,
   ACTION_MAX
} action;

action actionToDo;
   */
 
 
typedef enum {
   NILEVENT,
   EVENT_1,
   EVENT_2,
   EVENT_MAX
} event;

event   eventOccured;

typedef void (*action)();
 
// General functions
void stateEval(event e);
void exit(int status);
void getIOValues(void);

//Actions
void action1_1(void);
void action1_2(void);
void action1_3(void);

void action2_1(void);
void action2_2(void);
void action2_3(void);

void action3_1(void);
void action3_2(void);
void action3_3(void);

/**********************************************************************
* action functions
**********************************************************************/

void action1_1() {
  printf("action1.1 \n");
}

void action1_2() {
  printf("action1.2 \n");
}

void action1_3() {
  printf("action1.3 \n");
}

void action2_1() {
  printf("action2.1 \n");
}

void action2_2() {
  printf("action2.2 \n");
}

void action2_3() {
  printf("action2.3 \n");
}

void action3_1() {
  printf("action3.1 \n");
}

void action3_2() {
  printf("action3.2 \n");
}

void action3_3() {
  printf("action3.3 \n");
}



typedef struct {
    state nextState;       // Enumerator for the next state
    action actionToDo;     // function-pointer to the action that shall be released in current state
}  stateElement;               // structure for the elements in the state-event matrix


stateElement stateMatrix[3][3] = {
  { {STATE1, action1_1}, {STATE2, action1_2}, {STATE3, action1_3} },
  { {STATE2, action2_1}, {STATE2, action2_2}, {STATE3, action2_3} },
  { {STATE3, action3_1}, {STATE3, action3_2}, {STATE3, action3_3} }
};


/********************************************************************************
* stateEval (event)
* in Dependancy of an triggered event, the action wich is required by this
* transition will be returned. The proper action is determined by the current state the
* automat holds. The current state will then be transitioned to the requestet next
* state
********************************************************************************/

void stateEval(event e)
{
    //determine the State-Matrix-Element in dependany of current state and triggered event
        stateElement stateEvaluation = stateMatrix[currentState][e];


    //do the transition to the next state (set requestet next state to current state)...
    currentState = stateEvaluation.nextState;

    //... and fire the proper action
    (*stateEvaluation.actionToDo)();

}


void main()
{
    SYSTEM_Initialize();
   // init
   printf("Test");

   //output_high(LED0);
   //output_high(LED1);
   //output_high(LED2);
   //output_high(LED3);

   //delay_ms(500);

   srand(19);


   // Main loop - no more to put in main()
   // Go

   while (1) {

      eventOccured = rand()%EVENT_MAX;
      


      if (eventOccured != NILEVENT) {             // new event ?

         if (eventOccured <= EVENT_MAX) {    // avoid going outside the matrix
             __delay_ms(10);
             stateEval(eventOccured);
            eventOccured = NILEVENT;              // reset event
         }
      }
   }
}





