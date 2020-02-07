
#ifndef LinkedList_H_
#define LinkedList_H_

#include "std_types.h"
#include <stdlib.h>
#include <stdio.h>
typedef struct ST_node ST_node;

 struct ST_node {

ST_node* Next_node ;
uint16_t Data ;

};

typedef struct ST_list {

ST_node * head_ptr ;

uint16_t  count_linkedlist ;

}ST_list;


char createList(ST_list * mylist);
void insertToList(ST_list *mylist, unsigned char position, int data);
void deleteFromList(ST_list *mylist, unsigned char position, int* data);
ST_node* searchIntoList(ST_list *mylist, int data);


#endif /* LinkedList_H_ */
