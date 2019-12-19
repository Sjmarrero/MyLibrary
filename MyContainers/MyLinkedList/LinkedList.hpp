/*
 * LinkedList.hpp
 *
 *  Created on: Dec 18, 2019
 *      Author: Steven Marrero
 */

#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
	head = NULL;
	tail = head;
	size = 0;
}

template<class T>
LinkedList<T>::LinkedList(T val){
		head = new Node<T>(val);
		tail = head;
		size = 1;
	}

template<class T>
void LinkedList<T>::LinkedList::assign(iterator<T> first, iterator<T> last){
		while(first != last){
		}
	}

template<class T>
iterator<T> LinkedList<T>::before_begin() noexcept {
	iterator<T> itr = new iterator<T>(new Node<T>*(NULL, head));
	return itr;
};

template<class T>
const_iterator<T> LinkedList<T>::before_begin() const noexcept {
	const_iterator<T> c_itr = new const_iterator<T>(new Node<T>*(NULL, head));
	return c_itr;
}

template<class T>
iterator<T> LinkedList<T>::begin() noexcept {
	iterator<T> itr = iterator<T>(head);
	return itr;
}

template<class T>
const_iterator<T> LinkedList<T>::begin() const noexcept{
	const_iterator<T> c_itr = new const_iterator<T>(head);
	return c_itr;
};

template<class T>
const_iterator<T> LinkedList<T>::LinkedList::cbefore_begin() const noexcept{
	const_iterator<T> c_itr = new const_iterator<T>(new Node<T>*(NULL, head));
		return c_itr;
};

template<class T>
const_iterator<T> LinkedList<T>::cbegin() const noexcept{
	const_iterator<T> c_itr = const_iterator<T>(head);
	return c_itr;
};

template<class T>
const_iterator<T> LinkedList<T>::cend() const noexcept{
	const_iterator<T> c_itr = const_iterator<T>(tail);
	return c_itr;
};

template<class T>
void LinkedList<T>::clear(){
	while(head != NULL){
		this->pop_front();
	}
}

template<class T>
void LinkedList<T>::emplace_after(){};

template<class T>
void LinkedList<T>::emplace_front(){};

template<class T>
bool LinkedList<T>::empty(){
	if(size == 0)
		return true;
	else
		return false;
}

template<class T>
iterator<T> LinkedList<T>::end() noexcept{
	iterator<T> itr = iterator<T>(tail->next);
	return itr;
};

template<class T>
const_iterator<T> LinkedList<T>::end() const noexcept{
	const_iterator<T> c_itr = const_iterator<T>(tail->next);
	return c_itr;
}

template<class T>
void LinkedList<T>::erase_after(){};

template<class T>
void LinkedList<T>::front(){}

template<class T>
void LinkedList<T>::get_allocator(){};

template<class T>
Node<T>* LinkedList<T>::node_at(int index){
	if(index >= size)
		return tail;
	else if(index <= 0)
		return head;
	else{
		Node<T>* returnNode = head;
			for(int i = 0; i < index; i++){
			returnNode = returnNode->next;
		}
		return returnNode;
	}
}

template<class T>
void LinkedList<T>::insert(T val, int index){
	if(index >= size){
		this->push_back(val);
	}
	else if(index <= 0){
		this->push_front(val);
	}
	else{
		Node<T>* newNode = new Node<T>(val);
		Node<T>* itr = node_at(index - 1);
		Node<T>* temp = itr->next;
		itr->next = newNode;
		newNode->next = temp;
		size++;
	}
}

template<class T>
void LinkedList<T>::insert_after(){};

template<class T>
unsigned int LinkedList<T>::max_size(){
	return maximum_size;
}

template<class T>
void LinkedList<T>::merge(){};

template<class T>
void LinkedList<T>::operator=(LinkedList<T> list){};

template<class T>
void LinkedList<T>::pop_back(){
	Node<T>* temp = node_at(size-2);
	tail = temp;
	delete temp->next;
	size--;
}

template<class T>
void LinkedList<T>::pop_front(){
	Node<T>* temp = head;
	head = head->next;
	delete temp;
	size--;
}

template<class T>
std::string LinkedList<T>::print(){
	Node<T>* temp = head;
	std::string result = "";
	for(int i = 0; i < size; i++){
		result += std::to_string(temp->value) + " ";
		temp = temp->next;
	}
	return result;
}

template<class T>
void LinkedList<T>::push_back(T val){
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

template<class T>
void LinkedList<T>::push_front(T val){
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

template<class T>
void LinkedList<T>::removeIndex(int index){
	if(index == 0){
		this->pop_front();
	}
	else if(index >= size-1){
		this->pop_back();
	}
	else{
		Node<T>* itr = node_at(index-1);
		Node<T>* removeNode = itr->next;
		itr->next = removeNode->next;
		delete removeNode;
		size--;
	}
}

template<class T>
void LinkedList<T>::remove_if(){};

template<class T>
void LinkedList<T>::resize(int n){
	if(n < size){
		//this->erase_after(n-1);
	}
}

template<class T>
void LinkedList<T>::resize(int n, const T& val){}

template<class T>
void LinkedList<T>::reverse(){};

template<class T>
void LinkedList<T>::sort(){};

template<class T>
void LinkedList<T>::splice_after(){};

template<class T>
void LinkedList<T>::swap(){};

template<class T>
void LinkedList<T>::unique(){};

