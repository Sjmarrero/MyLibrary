/*
 * LinkedList.h
 *
 *  Created on: Dec 18, 2019
 *      Author: Steven Marrero
 */

#ifndef MYLINKEDLIST_LINKEDLIST_H_
#define MYLINKEDLIST_LINKEDLIST_H_

#include "Node.h"
#include <string>

template <class T>
class LinkedList{

private:
	Node<T>* head;
	Node<T>* tail;
	int size;

public:
	typedef Node<T>* iterator;
	typedef const Node<T>* const_iterator;

	LinkedList() {};
	LinkedList(T val){};
	void assign(iterator first, iterator last){};
	void append(T val){}
	void before_begin(){};
	iterator begin(){}
	void cbefore_begin(){};
	void cbegin(){};
	void cend(){};
	void clear(){};
	void emplace_after(){};
	void emplace_front(){};
	void empty(){};
	void end(){};
	void erase_after(){};
	void front(){};
	void get_allocator(){};
	void insert_after(){};
	void max_size(){};
	void merge(){};
	void operater(){};
	void pop_front(){};
	void push_front(T val){};
	void remove(int index){};
	void remove_if(){};
	void resize(){};
	void reverse(){};
	void sort(){};
	void splice_after(){};
	void swap(){};
	void unique(){};
	void prepend(T val){};
	void insert(T val, int index){};
	void pop_back(){};
	Node<T>* indexOf(int index){};
	std::string print(){};

};




#endif /* MYLINKEDLIST_LINKEDLIST_H_ */
