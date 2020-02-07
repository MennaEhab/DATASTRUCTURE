
#include "queue__.h"


void createQueue(ST_queueInfo* info, int maxSize){

 info ->queue_Pointer = (int*)malloc(maxSize * sizeof(int));

info-> size_queue = maxSize ;

info -> count_queue = 0 ;

info-> queue_end = -1 ;

info -> queue_start = 0 ;


}

void enqueue(ST_queueInfo *info, int data){

if(ISFullQ(info)){
        // realloc
    return ;
}


info -> count_queue++;
info-> queue_end++ ;
info-> queue_end = (info-> queue_end)%info-> size_queue ;
info->queue_Pointer[info->queue_end] = data ;

}

void dequeue(ST_queueInfo *info, int* data){
if (ISEmptyQ(info))
    return ;
info -> count_queue--;

*data =  info->queue_Pointer[info->queue_start] ;

info-> queue_start++ ;
info-> queue_start = (info-> queue_start)%info-> size_queue ;

//info->queue_Pointer[info->queue_end] = data ;

}

void print_queue(ST_queueInfo *info){
int count = 0 ;

for(count = 0 ; count <info->count_queue ; count++ ){

    printf("\n queue element  : %d \n",
    info->queue_Pointer[(info-> queue_start+count)%(info-> size_queue)]);

}
}



int ISFullQ (ST_queueInfo *info){

if ((info->count_queue) == info->size_queue){
        printf("%d" , info->count_queue);
    //printf("queue is full");
    return 1 ;}
else
    return 0 ;

}

int ISEmptyQ (ST_queueInfo *info){
if (info->count_queue==0){
   // printf("queue is empty");
    return 1 ;}
else
    return 0 ;
}



