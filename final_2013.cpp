#include <iostream>
using namespace std;

class Array {
	int* a;//dynamic array
	int cap;//capacity (total space in the array)
	int n; //size (number of elements inserted)
public:
	// Implementation here
	Array()
	{
		a = nullptr;
		cap = 0;
		n = 0;
	}

	Array(int* arr, int _n, int _cap = -1)
	{

		if (_cap < _n || _cap == -1)
			_cap = _n;

		cap = _cap;
		n = _n;
		a = new int[_cap];

		for (int i = 0; i < cap; i++)
			a[i] = arr[i];
	}

	void insert(int element)
	{
		if (cap >= n)
		{
			int* temp = new int[cap * 2];

			int i;
			for (i = 0; i < cap; i++)
				temp[i] = a[i];

			temp[i] = element;
			delete[] a;
			a = temp;
		}
		else {
			a[cap++] = element;
		}
	}


};


int main() {

	int temp[] = { 12, 4, 6,11, 5 };

	Array A; // make an empty array of capacity 0

	Array B(temp, 5, 10);
	/*
	Make an array with size 5 and capacity 10. If no capacity is specified or capacity
	is less than size, then set capacity equal to size, and allocate the array of
	that capacity. */


	int n, input;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		A.insert(i);
		/*
		 Insert puts the new integer at the next available index
		 in the array. If size exceeds capacity then, a new array
		 of double capacity is allocated, data is copied into it
		 and the older array is de-allocated. */
	}


	return 0;
}

