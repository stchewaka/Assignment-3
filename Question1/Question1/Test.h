#pragma once
#include <iostream>
#include <queue>

using namespace std;

int move_to_rear()
{
	//creates the queue
	queue<int> entryQueue; 

	entryQueue.push(20); // The numbers entered are being added to queue
	entryQueue.push(42);
	entryQueue.push(76);
	entryQueue.push(98);

	const int first = entryQueue.front();
	// first element removed
	entryQueue.pop(); 
	//first element pushed to the back
	entryQueue.push(first); 
	// returns new element in front entryQueue
	return entryQueue.front(); 

}