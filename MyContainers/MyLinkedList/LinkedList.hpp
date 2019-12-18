/*
 * LinkedList.hpp
 *
 *  Created on: Dec 18, 2019
 *      Author: Steven Marrero
 */


#include "Node.h"
#include <iostream>

using namespace std;

template <class T>
class LinkedList{

private:
	Node<T>* head;
	Node<T>* tail;
	int size;

public:
	typedef Node<T>* iterator;
	typedef const Node<T>* const_iterator;

	LinkedList() {
		head = NULL;
		tail = head;
		size = 0;
	}

	LinkedList(T val){
		head = new Node<T>(val);
		tail = head;
		size = 1;
	}

	template<class InputIterator>
	void assign(iterator first, iterator last){
		while(first != last){
		}
	}

	void append(T val){
		Node<T>* newNode = new Node<T>(val);
			if(head == NULL){
				head = newNode;
			}
			else{
				tail->next = newNode;
				tail = newNode;
			}
			size++;
	}

	void before_begin(){};

	iterator begin(){

	}

	void cbefore_begin(){};
	void cbegin(){};
	void cend(){};

	/*
	 * Removes all elements from the LinkedList container (which are
	 * destroyed), and leaving the container with a size of 0.
	 */
	void clear(){
		while(head != NULL){
			this->pop_front();
		}
	}

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

	void pop_front(){
		Node<T>* temp = head;
		head = head->next;
		delete temp;
		size--;
	}

	void push_front(T val){}

	void remove(int index){
		if(index == 0){
			this->pop_front();
		}
		else if(index >= size-1){
			this->pop_back();
		}
		else{
			Node<T>* itr = indexOf(index-1);
			Node<T>* removeNode = itr->next;
			itr->next = removeNode->next;
			delete removeNode;
			size--;
		}
	}

	void remove_if(){};
	void resize(){};
	void reverse(){};
	void sort(){};
	void splice_after(){};
	void swap(){};
	void unique(){};

	void prepend(T val){
		Node<T>* newNode = new Node<T>(val);
		if(head == NULL){
			head = newNode;
		}
		else{
			newNode->next = head;
			head = newNode;
		}
		size++;
	}

	void insert(T val, int index){

		if(index >= size){
			this->push_front(val);
		}
		else{
			Node<T>* newNode = new Node<T>(val);
			Node<T>* itr = indexOf(index - 1);
			Node<T>* temp = itr->next;
			itr->next = newNode;
			newNode->next = temp;
			size++;
		}
	}

	void pop_back(){
		Node<T>* temp = indexOf(size-2);
		tail = temp;
		delete temp->next;
		size--;
	}


	Node<T>* indexOf(int index){
		if(index >= size)
			return tail;
		else{
			Node<T>* returnNode = head;

			for(int i = 0; i < index; i++){
				returnNode = returnNode->next;
			}
			return returnNode;
		}
	}

	string print(){
		Node<T>* temp = head;
		string result = "";
		for(int i = 0; i < size; i++){
			result += to_string(temp->value) + " ";
			temp = temp->next;
		}
		return result;
	}

};



