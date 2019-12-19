/*
 * LinkedList.h
 *
 *  Created on: Dec 18, 2019
 *      Author: Steven Marrero
 */

#ifndef MYLINKEDLIST_LINKEDLIST_H_
#define MYLINKEDLIST_LINKEDLIST_H_

#include "../MyNode/Node.h"
#include "../../MyIterators/iterator.h"
#include "../../MyIterators/constiterator.h"

template <class T>
class LinkedList{

private:
	Node<T>* head;
	Node<T>* tail;
	int size;
	static const unsigned int maximum_size = 10000;

public:

	LinkedList();
	LinkedList(T val);
	void assign(iterator<T> first, iterator<T> last);

	/*
	 * Add an element to the end of the LinkedList container, whose
	 * content is equal to the specified parameter 'val'
	 */
	void append(T val);

	/*
	 * Returns an iterator pointing to the position before the first element
	 * in the container.
	 *
	 * The iterator returned shall not be dereferenced: It is meant to be used
	 * as an argument for member functions emplace_after, insert_after,
	 * erase_after or splice_after, to specify the beginning of the sequence
	 * as the location where the action is performed.
	 */
	iterator<T> before_begin() noexcept;
	const_iterator<T> before_begin() const noexcept;

	/*
	 * Returns an iterator pointing to the first element in the LinkedList
	 * container.
	 *
	 * If the container is empty, the returned iterator value shall not be
	 * dereferenced.
	 */
	iterator<T> begin() noexcept;
	const_iterator<T> begin() const noexcept;

	/*
	 * Returns a const_iterator pointing to the position before the first
	 * element in the container.
	 *
	 * The value returned shall not be dereferenced.
	 */
	const_iterator<T> cbefore_begin() const noexcept;

	/*
	 * Returns a const_iterator pointing to the first element in the
	 * container.
	 *
	 * If the container is empty, the returned iterator value shall not be
	 * dereferenced.
	 */
	const_iterator<T> cbegin() const noexcept;

	/*
	 * Returns a const_iterator pointing to the past-the-end element in the
	 * LinkedList container.
	 *
	 * The value returned shall not be dereferenced.
	 */
	const_iterator<T> cend() const noexcept;

	/*
	* Removes all elements from the LinkedList container (which are
	* destroyed), and leaving the container with a size of 0.
	*/
	void clear();
	void emplace_after();
	void emplace_front();

	/*
	 * Returns a bool value indicating whether the LinkedList container
	 * is empty, i.e. whether its size is 0.
	 */
	bool empty();

	/*
	 * Returns an iterator referring to the past-the-end element in the
	 * LinkedList container.
	 *
	 * Because the ranges used by functions of the standard library do not
	 * include the element pointed by their closing iterator, this function
	 * is often used in combination with LinkedList::begin() to specify a
	 * range including all the elements in the container.
	 *
	 * If the container is empty, this function returns the same as
	 * LinkedList::begin
	 */
	iterator<T> end() noexcept;
	const_iterator<T> end() const noexcept;
	void erase_after();

	/*
	 * Returns a reference to the first element in the LinkedList
	 * container.
	 */
	void front();
	void get_allocator();

	/*
	 * Adds a new element to the LinkedList container whose value is
	 * instantiated with the parameter 'val' and whose location within the
	 * container is indicated by the parameter 'index'.
	 *
	 * If 'index' is greater than the size of the LinkedList container,
	 * the new element is added at the end through the function call
	 * LinkedList::push_back()
	 *
	 * If 'index' is less than or equal to 0, the new element is added at
	 * the front through the function call LinkedList::push_front()
	 */
	void insert(T val, int index);
	void insert_after();

	/*
	 * Returns the maximum number of elements that the LinkedList container
	 * can hold. max_size = 10,000
	 */
	unsigned max_size();
	void merge();

	/*
	 * Returns the Node<T>* element located at the position indicated by
	 * the parameter 'index'.
	 *
	 * If 'index' is greater than the size of the LinkedList container,
	 *  this function returns the element referenced by tail.
	 *
	 * If 'index' is less than or equal to 0, this function returns the
	 * element referenced by head.
	 */
	Node<T>* node_at(int index);
	void operator=(LinkedList<T> list);

	/*
	 * Removes the last element in the LinkedList container, effectively
	 * reducing the size by one.
	 *
	 * this destroys the removed element.
	 */
	void pop_back();

	/*
	 * Removes the first element in the LinkedList container, effectively
	 * reducing the size by one.
	 *
	 * This destroys the removed element.
	 */
	void pop_front();
	std::string print();

	/*
	 * Inserts a new element at the end of the LinkedList container, right
	 * after its current last element. The content of 'val' is copied
	 * (or moved) to the inserted element.
	 *
	 * This effectively increases the container size by one.
	 */
	void push_back(T val);

	/*
	 * Inserts a new element at the beginning of the LinkedList container,
	 * right before its current first element. The content of 'val' is
	 * copied (or moved) to the inserted element.
	 *
	 * This effectively increases the container size by one.
	 */
	void push_front(T val);

	void remove(T val);
	void removeIndex(int index);
	void remove_if();

	/*
	 * Resizes the container to contain n elements.
	 *
	 * If n is smaller than the current number of elements in the container,
	 * the content is trimmed to contain only the first n elements, removing
	 * those beyond (and destroying them).
	 *
	 * If n is greater than the current number of elements in the container,
	 * the content is expanded by inserting at the end as many elements as
	 * needed to reach a size of n elements. If val is specified, the new
	 * elements are initialized as copies of val, otherwise they are
	 * value-initialized.
	 */
	void resize(int n);
	void resize(int n, const T& val);
	void reverse();
	void sort();
	void splice_after();
	void swap();
	void unique();
};


#endif /* MYLINKEDLIST_LINKEDLIST_H_ */
