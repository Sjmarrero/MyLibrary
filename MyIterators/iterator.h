/*
 * Iterator.h
 *
 *  Created on: Dec 18, 2019
 *      Author: Steven Marrero
 */

#ifndef ITERATOR_H_
#define ITERATOR_H_

#include "../MyContainers/MyNode/Node.h"

template<class T>
class iterator {

private:
	Node<T>* itr;

public:
	iterator();

	iterator(Node<T>* node);

	iterator<T>& operator++();

	bool operator== (const iterator& rhs);

	bool operator!= (const iterator& rhs);

	T operator*();

	virtual ~iterator();
};

#endif /* ITERATOR_H_ */
