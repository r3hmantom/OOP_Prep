#include <iostream>
using namespace std;


class Rectangle
{
public:
	int* length = new int;
	int* width = new int;


	void Print()
	{
		cout << *length << " , " << *width << endl;
	}

	Rectangle() // default constructor
	{
		*length = 0;
		*width = 0;
	}

	Rectangle(int l, int w) // parametrized constructor
	{
		*length = l;
		*width = w;
	}


	// overloading constructors
	Rectangle(int l)
	{
		*length = l;
		*width = -l;
	}


	// copy constructor
	Rectangle(const Rectangle& alias)
	{
		// doing deep copy using alias 
		// because we are using pointers with dynamic allocation
		// if I did not do it, then when the length and width of artifical and origial will be pointing
		// to same memory location in heap, and when the destructor for artifical (jo pehle aata wo last tk rehta he, aritifcal baad me bna tha to pehle jaega)
		// the destrctor deallcoates memory, but the same memory was being pointed by the original, so when it triees to access it, it gives error

		this->length = new int;
		*length = *(alias.length);

		this->width = new int;
		*width = *(alias.width);
	}



	// destructor
	~Rectangle() {
		delete width;
		delete length;

		cout << "Destructor called " << endl;
	}
};


int main() {

	// three types of consturctor
	// default, parametrized, copy
	// if you write any type of constructor, the default constructor provided by the compiler is gone
	// then if you create an object with no parameters and you only defined parameterized constructor, then you are cooked


	// default -> constructor with no parameters // created default by compiler
	cout << "Default constructor: box1" << endl;
	Rectangle box;
	cout << box.length << " , " << box.width;

	cout << endl << endl;

	// parametrized constructor
	cout << endl << "Parametrized constructor: box2" << endl;
	Rectangle box2(4, 5);
	cout << box2.length << " " << box2.width;

	cout << endl << endl;


	// we can also define overloaded constuctors, mtlb ek constructor sirf ek value accpet krta ho initailization 
	// ke waqt, doosra constructor 2 values accept krta ho, phr jitni values pe hm call krenge 
	// us hisab se constructor call hoga

	cout << "Overloaded constructors: bo3" << endl;
	Rectangle box3(30);
	cout << box3.length << " , " << box3.width << endl;


	// copy constructor
	// aisa constructor jo tb use hota he jb hm ek object ko doosre object se initialize krte hen
	// ye by default available hota he
	// isme by default object ka alias pass hota he jiski value se initialize krna hota he, remember ke 
	// alias is just a nickname for the original object
	// ex:  Rectangle& alias = box3   ||||   now, box3 and alias are ditto same
	// no destructor is called for alias because it is jsut a nickname, so only one destructor will be called no matter what
	// even if you define alias in another scope and try to destruct it with the end of scope, it will not be called 
	// until the original box3 is not destructed;


	cout << endl << endl;


	{
		cout << "Alias of box3 : " << endl;
		Rectangle& alias = box3;
		cout << box3.length << " , " << box3.width << endl;
	}

	cout << "Scope ended, but no destructor called for alias";

	cout << endl << endl;



	cout << endl << "box3" << endl;
	cout << box3.length << " , " << box3.width << endl;

	cout << endl << endl;


	// copy constructor -> aisa constructo jo tb call hota 
	// he jb hm kisi new object ko creation ke waqt initialize kren wo bhi doosre kisi object se

	cout << "Original" << endl;
	Rectangle original(10, 10);
	original.Print();

	cout << "Artificial" << endl;
	Rectangle artificial(original);
	artificial.Print();




	return 0;
}
