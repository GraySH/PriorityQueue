/*
 * PriorityQueue.h
 *
 *  Created on: Oct 26, 2016
 *      Author: gray
 */

#ifndef PRIORITYQUEUE_H_
#define PRIORITYQUEUE_H_

typedef int Data;
static const int HEAP_SIZE = 10;

class PriorityQueue
{
private:
	struct Heap
	{
		Data data;
	};
	Heap heapArray[HEAP_SIZE];

public:
	void HeapInit();

};


#endif /* PRIORITYQUEUE_H_ */
