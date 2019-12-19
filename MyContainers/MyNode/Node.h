/*
 * Node.h
 *
 *  Created on: Dec 18, 2019
 *      Author: Steven Marrero
 */

#ifndef MYLINKEDLIST_NODE_H_
#define MYLINKEDLIST_NODE_H_

template <class T>
class Node{
public:
	T value;
	Node* next;

	Node();

	Node(T val);

	Node(T val, Node<T>* nextNode);

	void operator=(T val);

	~Node();
};

#include "Node.hpp"

#endif /* MYLINKEDLIST_NODE_H_ */
