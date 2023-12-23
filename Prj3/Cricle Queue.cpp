#include<iostream>
using namespace std;

class SafCircle
{
private:
	int* array;
	int n;
	int size;
	int front = 0;
	int rear = 0;
public:
	SafCircle(int n) {
		array = new int[n];
		size = n;
	}

	int IsEmpty() {
		if (front == rear) {
			return;
		}
	}

	int IsFull() {
		return size == n;
	}

	int Enqueue(int object) {
		if (IsFull()) {
			return;
		}
		rear = (rear + 1) % n;
		array[rear] = object;
		size++;

	}
	int DeQueue(int object) {
		if (IsEmpty()) {
			return;
		}
		object = array[front];
		front = (front + 1) % n;
		size--;
		return object;
	}
	int Peek() {
		if (IsEmpty()) {
			return;
		}
		return array[front];
	}
	void ReveseQueue() {
		if (IsEmpty()) {
			return;
		}
		int* reversedArr = new int[n];
		int index = 0;
		for (int i = rear; i >= front; i--) {
			reversedArr[index++] = array[i];
		}
		delete[] array;
		array = reversedArr;
		front = 0;
		rear = size - 1;
	}




};
