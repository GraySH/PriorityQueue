/*
 * PriorityQueue.h
 *
 *  Created on: Oct 26, 2016
 *      Author: gray
 */

#ifndef PRIORITYQUEUE_H_
#define PRIORITYQUEUE_H_
#include <iostream>

using namespace std;
typedef int Data;
static const int MAX_HEAP_SIZE = 100;

//function pointer for compare function
typedef bool priorityComp(Data d1, Data d2);

class PriorityQueue
{
private:
	int numOfData;
	Data heapArray[MAX_HEAP_SIZE];

public:
	priorityComp* comp;

	PriorityQueue();
	~PriorityQueue();

	void init(int size);
	bool isEmpty();

	//return parent index of input index
	int getParentIndex(int index);

	//return child index
	int getLeftChildIndex(int index);
	int getRightChildIndex(int index);

	//return bigger child index
	int getPriorityIndex(int index);

	//insert data to heap.
	void insert(Data data);

	//delete heap
	Data deleteHeap();


	//display contents of a heapArray
	void showArray();

};


#endif /* PRIORITYQUEUE_H_ */
