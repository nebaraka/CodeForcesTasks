#pragma once

template <typename T>
class MyStack
{
	unsigned int _length;
	unsigned int _blues;
	struct MyStackElement
	{
		T item;
		MyStackElement* next;
	} *end;
public:
	MyStack() {
		end = NULL;
		_length = 0;
		_blues = 0;
	}
	void push(T item) {
		MyStackElement* next = end;
		end = new MyStackElement;
		end->item = item;
		end->next = next;
		_length++;
		if (item == 'B' || item == 'b') _blues++;
	}
	T pop() {
		if (end == NULL) return NULL;
		T result = end->item;
		end = end->next;
		_length--;
		if (result == 'B' || result == 'b') _blues--;
		return result;
	}
	int length() {
		return this->_length;
	}
	bool isEmpty() {
		return (end == NULL);
	}
	bool hasBlues() {
		return _blues != 0;
	}
	void doOperation(unsigned int n) {
		while (end != NULL && (end->item == 'R' || end->item == 'r')) {
			this->pop();
		}
		this->pop();
		this->push('R');
		while (_length < n) {
			this->push('B');
		}
	}
};