/*
 * Node.cpp
 *
 *  Created on: Dec 16, 2019
 *      Author: Steven Marrero
 */

#include <stdio.h>

template <class T>
class Node{
public:
	T value;
	Node* next;

	Node() {
		next = NULL;
	}

	Node(T val){
		value = val;
		next = NULL;
	}

	~Node() {

	}
};

