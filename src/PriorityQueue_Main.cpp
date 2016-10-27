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


bool compare(Data d1, Data d2)
{
	if(d1 > d2)
		return true;
	else
		return false;
}


int main()
{
	PriorityQueue pQueue;

	//assign function pointer
	pQueue.comp = &compare;

//	for(int i = 1; i < 10; i++)
//	{
//		pQueue.insert(i);
//	}

	pQueue.insert(5);
	pQueue.insert(3);
	pQueue.insert(4);
	pQueue.insert(1);
	pQueue.insert(6);
	pQueue.insert(2);

	pQueue.showArray();


	return 0;
}
