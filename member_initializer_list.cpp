//#include <iostream>
//using namespace std;
//
//
//class Test
//{
//	int a;
//	int b;
//
//public:
//	//Test(int i, int j) : b(j) ,  a(b + i)  /// b is garbage when value of a is assigned
//	Test(int i, int j) : a(b + i), b(j)		/// b is garbage when value of a is assigned
//
//	{
//		cout << "Constructor executed" << endl;
//		cout << "Value of a is " << a << endl;
//		cout << "Value of b is " << b << endl;
//	}
//};
//
//int main()
//{
//	Test t(4, 6);
//
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////// MEMBER INITIALIZER LIST FOR NESTED CLASS EXAMPLE
////// We use member initializer list to initialize class member which is a class object
////
////
////
/////// MEMBERS ARE INITIALZIED IN THE ORDER IN WHICH THEY ARE DEFINED IN CLASS DEFINITION
/////// THE ORDER IN THE LIST DOESN'T MATTER
////
////
////
////#include <iostream>
////using namespace std;
////
////
////class A {
////	int i;
////public:
////	A(int num)
////	{
////		i = num;
////		cout << "A's constructor called, i = " << i << endl;
////	}
////
////	// if this was not here, mtlb deafult na hota, to B ke andar A ko initialze krna prna tha, 
////	// or uska sirf ek tareqa tha, using member initialzier list, nhi to phr koi constant value hoti, user se value na lete hm phr
////	//A()
////	//{
////	//	i = 0;
////	//}
////};
////
////class B {
////	A a;
////public:
////	B(int num): a(num)
////	{
////		cout << "B's constructor called " << endl;
////	}
////};
////
////
////
////int main() {
////	B obj(10);
////
////	return 0;
////}
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
//////#include <iostream>
//////using namespace std;
//////
//////// MEMBER INITIALIZER LIST
//////// If your class members are of constant types and you want to assign a value to each object
//////// separately then we use initializer list
//////// CONST and REFERENCES must be initialized using initializer list
//////// SYNTAX
//////// CLASS() :   this_area_is_member_initializer    {}
//////// in this area,   your_member_name( parameterName )
//////
//////// if multiple, then use commas
//////
//////
//////
//////class Rectangle
//////{
//////private:
//////	const int length;
//////	int width;
//////
//////	int& ref; // reference int variable (alias)   || reference variables = alias
//////
//////public:
//////	// Initializing constant members and references
//////	Rectangle(int l, int w, int& param) : length(l) , ref(param)
//////	{
//////		cout << "Bro inside: " << &ref << endl;
//////		width = w;
//////	}
//////
//////	void Print()
//////	{
//////		cout << length << " , " << width << endl;
//////	}
//////
//////	~Rectangle() {
//////
//////	};
//////};
//////
//////
//////int main() {
//////	int bro = 10;
//////	cout << "Bro address : " << &bro << endl;
//////	Rectangle box(40, 40, bro);
//////	box.Print();
//////
//////	return 0;
//////}
