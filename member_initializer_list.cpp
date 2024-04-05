//#include <iostream>
//using namespace std;
//
//// MEMBER INITIALIZER LIST
//// If your class members are of constant types and you want to assign a value to each object
//// separately then we use initializer list
//// CONST and REFERENCES must be initialized using initializer list
//// SYNTAX
//// CLASS() :   this_area_is_member_initializer    {}
//// in this area,   your_member_name( parameterName )
//
//// if multiple, then use commas
//
//
//
//class Rectangle
//{
//private:
//	const int length;
//	int width;
//
//	int& ref; // reference int variable (alias)   || reference variables = alias
//
//public:
//	// Initializing constant members and references
//	Rectangle(int l, int w, int& param) : length(l) , ref(param)
//	{
//		cout << "Bro inside: " << &ref << endl;
//		width = w;
//	}
//
//	void Print()
//	{
//		cout << length << " , " << width << endl;
//	}
//
//	~Rectangle() {
//
//	};
//};
//
//
//int main() {
//	int bro = 10;
//	cout << "Bro address : " << &bro << endl;
//	Rectangle box(40, 40, bro);
//	box.Print();
//
//	return 0;
//}
