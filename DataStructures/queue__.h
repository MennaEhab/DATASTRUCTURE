#ifndef QUEUE_H_
#define QUEUE_H_

#include "std_types.h"
#include <stdlib.h>

typedef struct ST_queueInfo {

   //queue pointer
   int * queue_Pointer ;
   //no of elements in queue
  uint8_t count_queue ;
   // size of the queue
   uint8_t size_queue ;
   //pointer to the start of the queue
   int queue_start ;
   //pointer to the end of the queue
   int queue_end ;

}ST_queueInfo;

void createQueue(ST_queueInfo* info, int maxSize);

void enqueue(ST_queueInfo *info, int data);

void dequeue(ST_queueInfo *info, int* data);

int ISFullQ (ST_queueInfo *info);

int ISEmptyQ (ST_queueInfo *info);

long long evaluate(char* expression);


#endif /* QUEUE_H_ */
