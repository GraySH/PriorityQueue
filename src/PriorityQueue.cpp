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
		int leftIndex = getLeftChildIndex(index);
		int rightIndex = getRightChildIndex(index);
		if(heapArray[leftIndex] < heapArray[rightIndex])
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
		if( heapArray[getParentIndex(index)] < data )
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
	for(int i = 1; i <= numOfData; i++)
	{
		std::cout << heapArray[i] << " ";
	}
	std::cout << std::endl;
}


Data PriorityQueue::deleteHeap()
{
	int index = numOfData;
	Data temp = heapArray[1];
	while(index < numOfData)
	{
		if(heapArray[index] > heapArray[getPriorityIndex(index)] )
		{
			//copy child contents to parent contents.
			heapArray[index] = heapArray[getPriorityIndex(index)];
			index = getPriorityIndex(index);
		}
		else
		{
			break;
		}
	}

	numOfData = numOfData - 1;
	return temp;
}





