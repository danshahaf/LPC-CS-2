/*
 * LL.cpp
 *
 *  Created on: Dec 3, 2018
 *      Author: shahafdan
 */
#include <string>
#include <iomanip>
#include <iostream>
#include "LL.hpp"
using namespace std;

void LL::push_front (string newNodeValue)
{
	singleNode *tempHead;
	singleNode *newNode;
	singleNode *tempNode;

	tempNode = new singleNode;
	tempNode -> dataContained = "null";

	newNode = new singleNode;
	newNode -> dataContained = newNodeValue;

	if(!head)
			{head = newNode; newNode -> next = nullptr;}
		else
		{
			//stage #1
			tempHead = head;
			tempNode -> next = tempHead -> next;
			tempHead -> next = tempNode;

			//stage #2
			tempNode -> dataContained = tempHead -> dataContained;

			//stage #3
			tempHead -> dataContained = newNode ->dataContained;
		}
}

void LL::push_back (string newNodeValue)
{
	//declarations
	singleNode * tempNode; //create a linkedlist to go through
	singleNode * newNode; //create a data structure for the new node appended

	//setup the new node
	newNode = new singleNode;
	newNode -> dataContained = newNodeValue; //assign it a value for its string value
	newNode -> next = nullptr; //let its next node call be a nullptr, so they node after it will be the null node

	if(!head) //if no nodes in the list
		{head = newNode; newNode -> next = nullptr;} //then the new node is the header
	else
	{
		tempNode = head;
		while (tempNode -> next != nullptr)
		{
			tempNode = tempNode -> next;
		}

		tempNode -> next = newNode;
	}



}

void LL::display_nodes ()
{ //check functionality
	singleNode *nodePtr;
	nodePtr = head;
	while(nodePtr != nullptr)
	{
		cout << nodePtr -> dataContained << endl;
		 nodePtr = nodePtr -> next;
	}


}

void LL::debug()
{
// change "LLheader" to whatever the name of the ll header is in your class implementation
// change "nextPtr" to whatever the name of the node's forward pointer is in your class implementation
// change "dataValue" to whatever the name of the node's data field is in your class implementation
	int i=0;
	singleNode * tempPtr;
	tempPtr = head;
	cout << "In debug " << endl << "List header contains " << tempPtr << endl;
	while (tempPtr != nullptr)
	{
		cout << "Node " << i << " is at address " << tempPtr << ", its fwd pointer is " << tempPtr->next << ", and has data " << tempPtr->dataContained << endl;
		tempPtr = tempPtr -> next;
		i++;
	}
	cout << "Leaving debug" << endl << endl;
	return;
}

LL::LL()
{
	head = nullptr;

}



