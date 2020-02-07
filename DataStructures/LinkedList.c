


#include "LinkedList.h"





//typedef struct ST_LinkedList {
//
//ST_node * head_ptr ;
//
//uint16_t  count_linkedlist ;
//
//}ST_LinkedList;
//
//typedef ST_node {
//
//ST_node Next_node ;
//uint16_t Data ;
//
//}ST_node;

char createList(ST_list * mylist){
    mylist->head_ptr = NULL ;
    mylist->count_linkedlist=0;

}
void insertToList(ST_list *mylist, unsigned char position, int data){
    int count = 0;
    ST_node *temp_ptr;
    ST_node *temp_ptr_prev;
    ST_node *temp_ptr_next;

     temp_ptr = (ST_node*)malloc( sizeof(ST_node));
     temp_ptr->Data =data;
     mylist->count_linkedlist++;

if(mylist->head_ptr==NULL){

    mylist->head_ptr=temp_ptr;
    temp_ptr->Next_node=NULL;


}else if(position== mylist->count_linkedlist+1) {
    temp_ptr_next = mylist->head_ptr ;
    temp_ptr_prev = mylist->head_ptr ;
    while( count<position ){
            temp_ptr_prev = temp_ptr_next;
            temp_ptr_next = temp_ptr_next->Next_node;
            count++;
    }
    temp_ptr ->Next_node = NULL;
    temp_ptr_prev->Next_node=temp_ptr;


}else {
    position=position-1;
    temp_ptr_next = mylist->head_ptr ;
    temp_ptr_prev = mylist->head_ptr ;
    while( count<position ){
            temp_ptr_prev = temp_ptr_next;
            temp_ptr_next = temp_ptr_next->Next_node;
            count++;
    }
    temp_ptr ->Next_node = temp_ptr_prev->Next_node;
    temp_ptr_prev->Next_node=temp_ptr;


}


}///end of function


void deleteFromList(ST_list *mylist, unsigned char position, int* data)
{
    int count = 0;
    ST_node *temp_ptr_prev;
    ST_node *temp_ptr_next;
    position=position-1;
    temp_ptr_next = mylist->head_ptr ;
    temp_ptr_prev = mylist->head_ptr ;
    while( count<position ){
            temp_ptr_prev = temp_ptr_next;
            temp_ptr_next = temp_ptr_next->Next_node;
            count++;
    }
     temp_ptr_prev->Next_node=temp_ptr_next->Next_node;
    //temp_ptr_prev->Next_node=temp_ptr;
    printf("%d %d\n", temp_ptr_next->Data,temp_ptr_prev->Data);
    *data=temp_ptr_next->Data;
    free(temp_ptr_next);
}


ST_node* searchIntoList(ST_list *mylist, int data){
 int count = 0;
    ST_node *temp_ptr;

    temp_ptr = mylist->head_ptr ;
    while( count<mylist->count_linkedlist ){
            if (temp_ptr->Data==data)
            break;

            temp_ptr= temp_ptr->Next_node;
            count++;
    }
return temp_ptr;

}
