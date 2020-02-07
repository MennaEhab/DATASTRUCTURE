#include <stdio.h>
#include <stdlib.h>

#include "stack__.h"
#include "queue__.h"
#include "LinkedList.h"

int main()
{

/*
    ST_stackInfo stack1 ;
    int * ptr_x ;
    int x ;
    ptr_x = &x ;
    int balanced = 5 ;
    ST_stackInfo * PTR_stack1 = 0;

    PTR_stack1 = &stack1 ;

    createStack(PTR_stack1 , 10 );
    push(PTR_stack1 , ')');
    push(PTR_stack1 , 2);
    push(PTR_stack1 , '}');

    pop(PTR_stack1 , ptr_x);
     pop(PTR_stack1 , ptr_x);
      pop(PTR_stack1 , ptr_x);
*/

/////////////check balanced test /////////////

/*
char* exp ="(())" ;

balanced = checkForBalancedParantheses(exp) ;

if (balanced == 1)
       {
    printf("unbalanced") ;
       }
    else if (balanced == 0){

        printf("balanced") ;
    }
*/
/////////queue test /////////

/*
ST_queueInfo queue1 ;

ST_queueInfo * ptr_queue1 = &queue1 ;

createQueue(ptr_queue1 , 5 ) ;

enqueue(ptr_queue1 , 1) ;
enqueue(ptr_queue1 , 2) ;
dequeue(ptr_queue1 , ptr_x);

enqueue(ptr_queue1 , 3) ;
enqueue(ptr_queue1 , 4) ;

dequeue(ptr_queue1 , ptr_x);
enqueue(ptr_queue1 , 5) ;
enqueue(ptr_queue1 , 6) ;
enqueue(ptr_queue1 , 7) ;
enqueue(ptr_queue1 , 8) ;
print_queue(ptr_queue1);
*/
/////////// test evaluation function ///////////

/*
long long sum = 0 ;
char* str1 = "(1*[123])" ;

sum = evaluate(str1) ;

printf("sum = %lld" , sum);
*/

////////////////////test linked list /////////////////////


/*
ST_list list1;

ST_list * ptr_list1 = &list1 ;

createList(ptr_list1);

insertToList(ptr_list1,1,5);

insertToList(ptr_list1,2,10);


insertToList(ptr_list1,3,15);


insertToList(ptr_list1,3,20);

printf("linked data : %d \n" ,ptr_list1->head_ptr->Data);

printf("linked data : %d \n" ,ptr_list1->head_ptr->Next_node->Data);

printf("linked data : %d \n" ,ptr_list1->head_ptr->Next_node->Next_node->Data);

printf("linked data : %d \n" ,ptr_list1->head_ptr->Next_node->Next_node->Next_node->Data);

deleteFromList(ptr_list1,2,&i);

printf("linked data : %d \n" ,ptr_list1->head_ptr->Data);

printf("linked data : %d \n" ,ptr_list1->head_ptr->Next_node->Data);

printf("linked data : %d \n" ,ptr_list1->head_ptr->Next_node->Next_node->Data);

ST_node node2 ;
ST_node *node2ptr;
node2ptr = searchIntoList(ptr_list1,20);

printf("node number : %d" , node2ptr->Data);

*/

    return 0;
}

