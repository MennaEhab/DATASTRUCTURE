
#include "stack__.h"
#include "queue__.h"
#include <string.h>

sint16_t change_string2number(char* expression){
uint8_t count = 0 ;
uint16_t tenth = 1 ;
uint16_t number = 0 ;
sint16_t size0fstring = strlen(expression) ;

for(count = 1 ; count <=size0fstring ; count++){
 number +=   ((expression[size0fstring-count]-48)*tenth) ;


    tenth*=10 ;
}

//printf("%d \n" , number) ;
//printf("%c" , expression[size0fstring-1]) ;
return number ;

}

long long evaluate(char* expression){
    ST_queueInfo myqueue ;
    ST_queueInfo* ptr_myqueue = &myqueue;
    uint16_t tenth = 1 ;
    uint16_t number = 0 ;

    uint16_t op1 = 0 ;
    uint16_t op2 = 0 ;
    uint16_t Operator = 0 ;
    uint16_t sum =0 ;

    createQueue(ptr_myqueue ,1000) ;

    int balanced ;

    balanced = checkForBalancedParantheses(expression);
    if (balanced == 1)
       {

        return 0 ;}
    else if (balanced == 0){


///////////////////////////calculate expression///////////////////////////////////////
        int expression_counter = 0;

        while(expression[expression_counter] != '\0'){
        if (expression[expression_counter]=='('||
            expression[expression_counter]==')'||
            expression[expression_counter]=='['||
            expression[expression_counter]==']'||
            expression[expression_counter]=='{'||
            expression[expression_counter]=='}'
            ){
                expression_counter ++;

                 continue ;
            }

// 0 = 48 , 9 =57
        while (expression[expression_counter] > 47  &&expression[expression_counter]<58){

                number +=   ((expression[expression_counter]-48)) ;
                number *= 10 ;

                expression_counter++;

        }

        if (!(expression[expression_counter-1]=='('||
            expression[expression_counter-1]==')'||
            expression[expression_counter-1]=='['||
            expression[expression_counter-1]==']'||
            expression[expression_counter-1]=='{'||
            expression[expression_counter-1]=='}'
            )){
                number/=10 ;
       enqueue(ptr_myqueue , number);
        number=0;
            }


        if (expression[expression_counter]=='+'||
            expression[expression_counter]=='-'||
            expression[expression_counter]=='*'||
            expression[expression_counter]=='/'){


            enqueue(ptr_myqueue , expression[expression_counter]);

        }


        if (expression[expression_counter] != '\0')
            expression_counter++;

        }



///////////////queue is ready  calculate //////////////





    dequeue(ptr_myqueue , &sum) ;

    while (!(ISEmptyQ(ptr_myqueue))){
           // sum = 0 ;

    dequeue(ptr_myqueue , &Operator) ;
    dequeue(ptr_myqueue , &op2) ;


   switch(Operator){

    case '+':
        sum = sum + op2 ;
        break ;
    case '-':
        sum = sum - op2 ;
        break ;
    case '*':
        sum = sum * op2 ;
        break ;
    case '/':
        sum = sum / op2 ;
        break ;



    }

}///// while end



        }/// else if brackets


        return sum ;
}
