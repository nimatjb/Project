#include<iostream>
using namespace std;

class Saf
{
private:
	int* arry;
	int size;
	int n;
	int front = -1;
	int rear = -1;
public:
	Saf(int n) {
		arry = new int[n];
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
		else {
			if (IsEmpty()) {
				return front == rear;
			}
		}
		rear = (rear + 1);
		arry[rear] = object;
		size++;
	}

	int Dequeue(int object) {
		if (IsFull()) {
			return;
		}
		else {
			if (IsEmpty()) {
				return front == rear;
			}
		}
		object = arry[front];
		front = front + 1;
		size--;
		return object;
	}
	int Peek() {
		if (IsEmpty()) {
			return-1;
		}
		return arry[front];
	}
	void ReverseQueue() {
		if (IsEmpty()) {
			return;
		}
		int* ReverseArray;
		ReverseArray = new int[n];
		int index=0;
		for (int i = rear; i <= front; i--) {
			ReverseArray[index++] = arry[i];
		}
		delete[] arry;
		arry = ReverseArray;
		front = 0;
		rear = size - 1;

	}
};
