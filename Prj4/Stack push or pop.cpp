#include <iostream>
using namespace std;
#define MAX_SIZE 100
class Stack
{
private:
	int item[MAX_SIZE];
	int top = -1;

public:
	bool IsEmpty() {
		return(top == -1);
	}
	int Push(int items) {
		if (IsEmpty()) {
			return -1;
		}
		else {
			if (top < MAX_SIZE) {
				item[++top] = items;
				return top + 1;
			}
		}
	}
	int Pop(int items) {
		if (IsEmpty()) {
			return -1;
		}
		else {
			if (top > -1) {
				item[top--] = -1;
				return top + 1;
			}
		}
	}
	

};

