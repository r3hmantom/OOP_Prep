//#include <iostream>
//using namespace std;
//
//
//
//// Static class members
//// ye sirf ek hi dfa create hote hen, or sari instances isi ek ko hi refer krti hen
//// it works even if there is not a single instance
//// ye sirf objects ko hi accessible hote hen, globally nhi, we have to use scope resolution operator to get access to these variables
//// ye private bhi hoskte hen or public bhi
//
//
//// isko bnane ka 2 step procedure hota he
//// sbse pehle class ki definition me isko define krdo, either public me ya private me
//// phr class ke bahir isko initialize kro value se using scope resolution operator
//// scope resolution se pehle variable ki data type bhi likhni he (v imp)
///*eg :
//class Rectangle {
//   public:
//	 static int countOfBoxes;
//}*/
//
//// int Rectangle::countOfBoxes = 0;
//
//// ab agr ye static variable public hoga to I can use Rectangle::count in my main function to access this value
//// agr ye private hoga, to phr aise access nhi krskte
//
//
//// PUBLIC STATIC VARIABLES 
////  Rectangle box;
//// cout << Rectangle::count;
//// cout << box.count;
//// getterrs like
//// cout << box.getCount()         // getCount()  is  a normal getter like     int getCount() {return count; }
//// cout << box.staticGetCount()   // here staticGetCount() is a static class function      static int staticGetCount() {return count;}
//// the staticGetCount can also be called as
//// cout << Rectangle::staticGetCount();
//
//
//
//
//
////PRIVATE STATIC VARIABLES
//// They can only be accessed using getters
//// cout << box.getCount();
//// cout << box.staticGetCount();
//// cout << Rectangle::staticGetCount();
//
////cout << boxes[1]->getCount();
////cout << boxes[1]->staticGetCount();
////cout << Rectangle::staticGetCount();
//
// 
//
//
//class Rectangle {
//	int width;
//	int height;
//	static int count;
//
//public:
//
//	int getCount() { return count; };
//	static int staticGetCount() { return count; };
//
//	Rectangle(int h = 0, int w = 0)
//	{
//		cout << "Constructor called " << endl;
//		width = w;
//		height = h;
//		count++;
//	}
//
//	void Print()
//	{
//		cout << "Box : " << "( " << width << " , " << height << " )";
//	}
//
//	~Rectangle() {
//		cout << "Destructor called" << endl;
//	}
//};
//
//int Rectangle::count = 0;
//
//int main() {
//
//
//	Rectangle* boxes[10];
//	for (int i = 0; i < 10; i++)
//		boxes[i] = new Rectangle(i + 1, i + 1);
//
//
//	cout << boxes[1]->getCount();
//	cout << boxes[1]->staticGetCount();
//	cout << Rectangle::staticGetCount();
//
//
//
//
//
//	return 0;
//}
