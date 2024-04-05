#include <iostream>
using namespace std;


class Rectangle {
	int width;
	int height;
	static int count;

	//int getCount() { return count; };
	//static int staticGetCount() { return count; };

public:
	int getCount() { return count; };
	static int staticGetCount() { return count; };


	Rectangle(int h = 0, int w = 0)
	{
		cout << "Constructor called " << endl;
		width = w;
		height = h;
		count++;
	}

	void Print()
	{
		cout << "Box : " << "( " << width << " , " << height << " )";
	}

	~Rectangle() {
		cout << "Destructor called" << endl;
	}
};



// STATIC CLASS FUNCTIONS
// they can only access static data and call only static functions   (NORMAL FUNCTIONS can access any data)
// they dont even have access to this pointer because they are static 


//PUBLIC STATIC CLASS FUNCTIONS
// cout << Rectangle::staticGetCount(); // would work
// cout << box.staticGetCount() // would work


// PRIVATE STATIC CLASS FUNCTIONS
// can only be used inside class, outside class kahin kaam nhi krega,should only be invoked inside class
// cout << Rectangle::staticGetCount() // error
// cout << box.staticGetCount() // error




int main() {


	Rectangle box(20, 20);

	cout << Rectangle::staticGetCount(); // would work
	cout << box.staticGetCount(); // would work



	cout << Rectangle::staticGetCount(); // error
	cout << box.staticGetCount(); // error

	return 0;
}
