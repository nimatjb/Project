#include<iostream>
using namespace std;

class Array
{
private:
	int* array;
	int size;

public:
	Array(int n) {
		array = new int[n];
		size = n;
	}
	int Insert(int object, int index) {
		if (index < size) {
			array[index] = object;
			return index;
		}
		return -1;
	}
	int Delete(int index) {
		if (index < size) {
			int object = array[index];
			array[index] = 0;
			return object;
		}
		return -1;
	}
	int Find(int object, int index) {
		for (int i = 0; i <= size; i++) {
			if (array[i] == object) {
				return i;
			}
			return -1;
		}
	}




};





