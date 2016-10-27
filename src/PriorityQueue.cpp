/*
 * PriorityQueue.cpp
 *
 *  Created on: Oct 26, 2016
 *      Author: gray
 */

#include "PriorityQueue.h"

PriorityQueue::PriorityQueue() : numOfData(0)
{

}

PriorityQueue::~PriorityQueue()
{
}

void PriorityQueue::init(int size)
{
}

bool PriorityQueue::isEmpty()
{
	if(numOfData == 0)
		return true;
	else
		return false;
}

//return parent index.

int PriorityQueue::getParentIndex(int index)
{
	return index / 2;
}

int PriorityQueue::getLeftChildIndex(int index)
{
	return index * 2;
}

int PriorityQueue::getRightChildIndex(int index)
{
	return (index * 2) + 1;
}

int PriorityQueue::getPriorityIndex(int index)
{
	if(getLeftChildIndex(index) > numOfData)
	{
		return 0;
	}
	else if(getLeftChildIndex(index) == numOfData)
	{
		return getLeftChildIndex(index);
	}
	else
	{
		//if(heapArray[getLeftChildIndex(index)] > heapArray[getRightChildIndex(index)])
		if(comp(heapArray[getLeftChildIndex(index)], heapArray[getRightChildIndex(index)]))
			return getLeftChildIndex(index);
		else
			return getRightChildIndex(index);
	}
}

void PriorityQueue::insert(Data data)
{
	int index = numOfData + 1;
	while(index != 1)
	{
		//if( data > heapArray[getParentIndex(index)] )
		if( comp( data, heapArray[getParentIndex(index)]) )
		{
			heapArray[index] = heapArray[ getParentIndex(index) ];
			index = getParentIndex(index);
		}
		else
			break;
	}
	//insert data to heapArray
	heapArray[index] = data;
	numOfData++;
}

void PriorityQueue::showArray()
{
	while(isEmpty() != true)
	{
		cout << deleteHeap() << " ";
	}
	cout << endl;
}


Data PriorityQueue::deleteHeap()
{
	Data temp = heapArray[1];
	Data lastElement = heapArray[numOfData];

	int parentIndex = 1;
	int childIndex;

	while(childIndex = getPriorityIndex(parentIndex))
	{
		if(comp(lastElement, heapArray[childIndex]))
			break;

		heapArray[parentIndex] = heapArray[childIndex];
		parentIndex = childIndex;
	}

	heapArray[parentIndex] = lastElement;
	numOfData = numOfData - 1;
	return temp;
}





