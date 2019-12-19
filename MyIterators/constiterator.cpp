/*
 * constiterator.cpp
 *
 *  Created on: Dec 18, 2019
 *      Author: Steven Marrero
 */

#include "constiterator.h"

template<class T>
const_iterator<T>::const_iterator() {
	itr = NULL;
}

template<class T>
const_iterator<T>::const_iterator(Node<T>* node){
	itr = node;
}

template<class T>
bool const_iterator<T>::operator== (const const_iterator& rhs){
	return itr == rhs.itr;
}

template<class T>
bool const_iterator<T>::operator!= (const const_iterator& rhs){
	return itr != rhs.itr;
}

template<class T>
T& const_iterator<T>::operator*(){
	return itr->value;
}

template<class T>
const_iterator<T>::~const_iterator() {
	// TODO Auto-generated destructor stub
}

