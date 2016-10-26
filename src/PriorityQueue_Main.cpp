//============================================================================
// Name        : PriorityQueue_Main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "PriorityQueue.h"
using namespace std;

int main()
{
	PriorityQueue pQueue;

	pQueue.insert(1);
	pQueue.insert(2);
	pQueue.insert(3);
	pQueue.insert(6);
	pQueue.insert(4);
	pQueue.insert(5);

	cout << pQueue.deleteHeap() << endl;
	cout << pQueue.deleteHeap() << endl;
	cout << pQueue.deleteHeap() << endl;


	pQueue.showArray();


	return 0;
}
