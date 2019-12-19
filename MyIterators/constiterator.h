/*
 * constiterator.h
 *
 *  Created on: Dec 18, 2019
 *      Author: Steven Marrero
 */

#ifndef CONS_TITERATOR_H_
#define CONS_TITERATOR_H_

#include "../MyContainers/MyNode/Node.h"

template<class T>
class const_iterator {

private:
	const Node<T>* itr;
public:
	const_iterator();

	const_iterator(Node<T>* node);

	bool operator== (const const_iterator& rhs);

	bool operator!= (const const_iterator& rhs);

	T& operator*();

	virtual ~const_iterator();
};

#endif /* CONS_TITERATOR_H_ */
