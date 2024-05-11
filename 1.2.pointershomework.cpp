//#include<iostream>
//using namespace std;
//
//void main()
//{
//	int x = 5;
//	int y = 7;
//	int temp;
//	int* xPtr;
//	int* yPtr;
//	int* tempPtr;
//
//	xPtr = &x;
//	yPtr = &y;
//	tempPtr = &temp;
//
//	*tempPtr = *xPtr;
//	*xPtr = *yPtr;
//	*yPtr = *tempPtr;
//
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//
//	tempPtr = xPtr;
//	xPtr = yPtr;
//	yPtr = tempPtr;
//
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
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
////#include <iostream>
////using namespace std;
////
////int main() {
////
////	int num1, num2, sum;
////	int* xptr, * yptr, * sumptr;
////
////	num1 = 5, num2 = 7, sum = 0;
////
////	xptr = 0, yptr = 0, sumptr = 0;
////
////	xptr = &num1, yptr = &num2, sumptr = &sum;
////
////	cout << "Num1: " << num1 << endl;
////	cout << "Num2: " << num2 << endl;
////	cout << "Address of Num1 = " << &num1 << endl;
////	cout << "Address of Num2 = " << &num2 << endl;
////
////	cout << endl << endl;
////	cout << "Printing by dererferencing: " << endl;
////	cout << "xptr: " << *xptr << endl;
////	cout << "yptr: " << *yptr << endl;
////	cout << "sumptr: " << *sumptr << endl;
////
////
////
////	cout << endl << endl;
////	cout << "Adding num1 and num2 using pointers: " << endl;
////	*sumptr = *xptr + *yptr;
////	cout << "sumptr: " << *sumptr << endl;
////
////
////	cout << endl << endl;
////	cout << "Printing values of pointers: " << endl;
////	cout << "xptr: " << xptr << endl;
////	cout << "yptr: " << yptr << endl;
////	cout << "sumptr: " << sumptr << endl;
////
////	return 0;
////}
