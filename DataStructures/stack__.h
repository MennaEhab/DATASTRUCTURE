

#ifndef STACK_H_
#define STACK_H_

#include "std_types.h"
#include <stdlib.h>

typedef struct ST_stackInfo{
    // count of the number elemnet in the stack
    // will be used as pointer to the next empty place
   uint8_t count_stack ;
   // size of the stack
   uint8_t size_stack ;
   //pointer to the start of the stack
   int * stack_Pointer ;

}ST_stackInfo;


extern void createStack(ST_stackInfo *info, int size);

extern void push(ST_stackInfo *info, int data);
extern void pop(ST_stackInfo *info, int* data);
extern int ISEmpty (ST_stackInfo *info);
extern int ISFull (ST_stackInfo *info);

extern unsigned char checkForBalancedParantheses(char* expression);

#endif /* STACK_H_ */
