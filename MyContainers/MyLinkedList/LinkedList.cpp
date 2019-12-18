/*
 * LinkedList.cpp
 *
 *  Created on: Dec 16, 2019
 *      Author: Steven Marrero
 */


#include <stdio.h>
#include <string>
#include "Node.cpp"
#include <iostream>

using namespace std;

template <class T>
class LinkedList{

private:
	Node<T>* head;
	Node<T>* tail;
	int length;

public:
	LinkedList() {
		head = NULL;
		tail = head;
		length = 0;
	}

	LinkedList(T val){
		head = new Node<T>(val);
		tail = head;
		length = 1;
	}

	void append(T val){
		Node<T>* newNode = new Node<T>(val);
		if(length == 0){
			head = newNode;
		}
		else{
			tail->next = newNode;
			tail = newNode;
		}
		length++;
	}

	void prepend(T val){
		Node<T>* newNode = new Node<T>(val);
		if(length == 0){
			head = newNode;
		}
		else{
			newNode->next = head;
			head = newNode;
		}
		length++;
	}

	void insert(T val, int index){

		if(index >= length){
			this->append(val);
		}
		else{
			Node<T>* newNode = new Node<T>(val);
			Node<T>* itr = indexOf(index - 1);
			Node<T>* temp = itr->next;
			itr->next = newNode;
			newNode->next = temp;
			length++;
		}
	}

	void pop_front(){
		Node<T>* temp = head;
		head = head->next;
		delete temp;
		length--;
	}

	void pop_back(){
		Node<T>* temp = indexOf(length-2);
		tail = temp;
		delete temp->next;
		length--;
	}

	void remove(int index){
		if(index == 0){
			this->pop_front();
		}
		else if(index >= length-1){
			this->pop_back();
		}
		else{
			Node<T>* itr = indexOf(index-1);
			Node<T>* removeNode = itr->next;
			itr->next = removeNode->next;
			delete removeNode;
			length--;
		}
	}

	Node<T>* indexOf(int index){
		if(index >= length)
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
		for(int i = 0; i < length; i++){
			result += to_string(temp->value) + " ";
			temp = temp->next;
		}
		return result;
	}

};
