
/// stack implementation


#include "stack__.h"


void createStack(ST_stackInfo *info, int size){


   info -> stack_Pointer = (int*)malloc(size * sizeof(int));
    info ->count_stack = 0 ;
    info->size_stack = size ;

}

void push(ST_stackInfo *info, int data){
if(ISFull(info)){
        // realloc
    return ;
}


info->stack_Pointer[info->count_stack] = data ;
info->count_stack++ ;

}

void pop(ST_stackInfo *info, int* data){
    if (ISEmpty(info))
    return ;
info->count_stack-- ;
(*data) = info->stack_Pointer[( info->count_stack)] ;

}

int ISEmpty (ST_stackInfo *info){
if (info->count_stack==0)
    return 1 ;
else
    return 0 ;
}



int ISFull (ST_stackInfo *info){
if ((info->count_stack+1)==info->size_stack)
    return 1 ;
else
    return 0 ;

}

unsigned char checkForBalancedParantheses(char* expression){
int count = 0 ;
int x ;
int flag = 0 ;

ST_stackInfo brac_stack ;

ST_stackInfo *ptr_brac_stack = &brac_stack ;

createStack(ptr_brac_stack , 1000) ;

while(expression[count]!='\0'){
//printf("%c" , expression[count] );

    switch (expression[count]){
        case '(' :
            push(ptr_brac_stack , expression[count]);
            break ;

        case '[':
            push(ptr_brac_stack , expression[count]);
            break ;
        case '{':
            push(ptr_brac_stack , expression[count]);
            break ;

        case ')':
            if (ISEmpty(ptr_brac_stack))
            {
                flag = 1 ;
                 break ;
            }
            pop(ptr_brac_stack , &x) ;
            if (x== '(')
                   flag = 0 ;
            else
                flag = 1 ;
            break ;
        case ']':
            if (ISEmpty(ptr_brac_stack))
            {
                flag = 1 ;
                 break ;
            }
            pop(ptr_brac_stack , &x) ;
            if (x== '[')
                flag = 0 ;
            else
                flag = 1 ;
            break ;
        case '}':
            if (ISEmpty(ptr_brac_stack))
            {
                flag = 1 ;
                break ;
            }
            pop(ptr_brac_stack , &x) ;
            if (x== '{')
                   flag = 0 ;
            else
                flag = 1 ;
             break ;
    }//switch

    if(flag==1)
        break ;
        count++;
}//while
//printf("%d" , flag) ;
if (flag == 1 || !(ISEmpty(ptr_brac_stack)))
//unbalanced
    return 1 ;
else
//balanced
    return 0 ;
}





