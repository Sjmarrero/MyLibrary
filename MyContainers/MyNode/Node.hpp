/*
 * Node.hpp
 *
 *  Created on: Dec 18, 2019
 *      Author: Steven Marrero
 */

#include <stdio.h>
#include "Node.h"

template<class T>
Node<T>::Node() {
	next = NULL;
}

template<class T>
Node<T>::Node(T val){
	value = val;
	next = NULL;
}

template<class T>
Node<T>::Node(T val, Node<T>* nextNode){
	value = val;
	next = nextNode;
}

template<class T>
void Node<T>::operator=(T val){
	this->value = val;
}

template<class T>
Node<T>::~Node() {}


