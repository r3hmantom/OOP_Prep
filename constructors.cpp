//#include <iostream>
//using namespace std;
//
//
//class Rectangle
//{
//public:
//	int* length = new int;
//	int* width = new int;
//
//
//	void Print()
//	{
//		cout << *length << " , " << *width << endl;
//	}
//
//	Rectangle() // default constructor
//	{
//		cout << "Default constructor called" << endl;
//		*length = 0;
//		*width = 0;
//	}
//
//	Rectangle(int l, int w) // parametrized constructor
//	{
//		cout << "Paramterized consturctor called " << endl;
//
//		*length = l;
//		*width = w;
//	}
//
//
//	// overloading constructors
//	Rectangle(int l)
//	{
//		*length = l;
//		*width = -l;
//	}
//
//
//	// copy constructor
//	Rectangle(const Rectangle& alias)
//	{
//		// doing deep copy using alias 
//		// because we are using pointers with dynamic allocation
//		// if I did not do it, then when the length and width of artifical and origial will be pointing
//		// to same memory location in heap, and when the destructor for artifical (jo pehle aata wo last tk rehta he, aritifcal baad me bna tha to pehle jaega)
//		// the destrctor deallcoates memory, but the same memory was being pointed by the original, so when it triees to access it, it gives error
//		cout << "Copy constructor called " << endl;
//		this->length = new int;
//		*length = *(alias.length);
//
//		this->width = new int;
//		*width = *(alias.width);
//	}
//
//
//
//	// destructor
//	~Rectangle() {
//		delete width;
//		delete length;
//
//		cout << "Destructor called " << endl;
//	}
//};
//
//
//void PrintBox(Rectangle b1, Rectangle b2)
//{
//	b1.Print();
//	b2.Print();
//}
//
//int main() {
//
//	//// three types of consturctor
//	//// default, parametrized, copy
//	//// if you write any type of constructor, the default constructor provided by the compiler is gone
//	//// then if you create an object with no parameters and you only defined parameterized constructor, then you are cooked
//
//
//	//// default -> constructor with no parameters // created default by compiler
//	//cout << "Default constructor: box1" << endl;
//	//Rectangle box;
//	//cout << box.length << " , " << box.width;
//
//	//cout << endl << endl;
//
//	//// parametrized constructor
//	//cout << endl << "Parametrized constructor: box2" << endl;
//	//Rectangle box2(4, 5);
//	//cout << box2.length << " " << box2.width;
//
//	//cout << endl << endl;
//
//
//	//// we can also define overloaded constuctors, mtlb ek constructor sirf ek value accpet krta ho initailization 
//	//// ke waqt, doosra constructor 2 values accept krta ho, phr jitni values pe hm call krenge 
//	//// us hisab se constructor call hoga
//
//	//cout << "Overloaded constructors: bo3" << endl;
//	//Rectangle box3(30);
//	//cout << box3.length << " , " << box3.width << endl;
//
//
//	//// copy constructor
//	//// aisa constructor jo tb use hota he jb hm ek object ko doosre object se initialize krte hen
//	//// ye by default available hota he
//	//// isme by default object ka alias pass hota he jiski value se initialize krna hota he, remember ke 
//	//// alias is just a nickname for the original object
//	//// ex:  Rectangle& alias = box3   ||||   now, box3 and alias are ditto same
//	//// no destructor is called for alias because it is jsut a nickname, so only one destructor will be called no matter what
//	//// even if you define alias in another scope and try to destruct it with the end of scope, it will not be called 
//	//// until the original box3 is not destructed;
//
//
//	//cout << endl << endl;
//
//
//	//{
//	//	cout << "Alias of box3 : " << endl;
//	//	Rectangle& alias = box3;
//	//	cout << box3.length << " , " << box3.width << endl;
//	//}
//
//	//cout << "Scope ended, but no destructor called for alias";
//
//	//cout << endl << endl;
//
//
//
//	//cout << endl << "box3" << endl;
//	//cout << box3.length << " , " << box3.width << endl;
//
//	//cout << endl << endl;
//
//
//	//// copy constructor -> aisa constructo jo tb call hota 
//	//// he jb hm kisi new object ko creation ke waqt initialize kren wo bhi doosre kisi object se
//
//	//cout << "Original" << endl;
//	//Rectangle original(10, 10);
//	//original.Print();
//
//	//cout << "Artificial" << endl;
//	//Rectangle artificial(original);
//	//artificial.Print();
//
//
//
//	cout << endl << endl;
//	cout << " --------------------------------------------------- " << endl;
//
//	// copy constructor is called in three situations
//	// Initializing a new object with exisitng object
//	// eg:  Rectangle box( box3 );
//
//	//Rectangle box(20, 20);
//	//Rectangle box2(box); // yahan pr bhi call hoga
//	//Rectangle* ptr = new Rectangle(box); // yahan pr bhi call hoga, since we are initializing with an object
//
//
//
//	// Returning an object by value
//	//Rectangle box(20, 30); 
//	//Rectangle box2 = box; // yahan pr bhi call hoga, assignment operator by value return krta he member wise copy krke
//	
//
//	// Passing objects by value into a function
//
//	// Copy constructor will be called because b1 and b2 will be created again with memberwise copy
//	// if you had argument pass by reference (alias) then it would not create separate object instances again , so no copy constructor will be called
//	//void PrintBox(Rectangle b1, Rectangle b2)
//	//{
//	//	b1.Print();
//	//	b2.Print();
//	//}
//
//	//Rectangle box1(20, 20);
//	//Rectangle box2(30, 30);
//
//	//PrintBox(box1, box2);
//
//
//	// Difference between copy constructor and assignment operator
//	// assignment operator has a return value
//	// copy constructor doesnt have a reutrn value
//
//
//
//	// Array of objects
//	// this calls default constructor but what if we want to use paramterized constructor for arrays?
//	//Rectangle boxes[10];
//
//	// So to solve this problem we use pointers, we create array of pointers and
//	// we then loop over each object instance and call paramterized constructor for it
//
//	//Rectangle* boxesPtr = new Rectangle[10]; // is trha default consturctor call hoga, to dont initialize it
//	//Rectangle* boxesPtr[10];
//
//	//for (int i = 0; i < 10; i++)
//	//	boxesPtr[i] = new Rectangle(30, 30);
//
//	//for (int i = 0; i < 10; i++)
//	//	delete boxesPtr[i]; // using delete[] is worng because we are deleing individual object with new, we use delete[] with arrays
//
//	// no need to delete[] boxesPtr because we didn't use new keyword for it
//
//
//
//
//	// Agr objects global scope me define krte hen, mtlb instance ko outside of main function bnate hen
//	// to iska constructor main se pehle call hoga,or destructor tb call hoga jb main function exit hoga only
//
//
//	// Agr object local scope me define kiye hen, to wo define krte hi constructor call hoga, or destructor
//	// tb call hoga jb object ka scope khtm hoga ya main function end hoga
//
//	// jo static class ke members honge unka alehda stack bnalo, wo global or local ke drmyan me pop hote hen
//	// sbse pehle locals pop hote hen saare << uske baad saare static pop hote hen << last pe global pop hote hen
//	// jo last me create hoga wo pehle pop hoga
//
//
//
//	return 0;
//}
