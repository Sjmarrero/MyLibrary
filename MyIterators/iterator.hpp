
/*
 * Iterator.cpp
 *
 *  Created on: Dec 18, 2019
 *      Author: Steven Marrero
 */

#include "iterator.h"
#include <stdio.h>

template<class T>
iterator<T>::iterator(){
	itr = NULL;
}

template<class T>
iterator<T>::iterator(Node<T>* node){
	itr = node;
}

template<class T>
iterator<T>& iterator<T>::operator++(){
	itr = itr->next;
	return *this;
}

template<class T>
bool iterator<T>::operator== (const iterator& rhs){
	return itr == rhs.itr;
}

template<class T>
bool iterator<T>::operator!= (const iterator& rhs){
	return itr != rhs.itr;
}

template<class T>
T iterator<T>::operator*(){
	return itr->value;
}

template<class T>
iterator<T>::~iterator(){
	delete itr;
}


