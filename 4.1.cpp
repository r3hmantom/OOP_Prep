//#include<iostream>
//using namespace std;
//
//void SwapByPointers(int* a, int* b)	// Copies of the pointers will be generated in the activation record of SwapByPointers, but swapping a and b will not affect the original pointers in main().
//{
//	cout << "\n\n\nValues in SwapByPointer():" << endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "Address of a = " << &a << endl;
//	cout << "Address of b = " << &b << endl;
//
//	int* temp = a;
//	a = b;
//	b = temp;
//}
//
//void SwapByPointersAgain(int* a, int* b)	// Copies of the pointers will be generated in the activation record of SwapByPointersAgain, but dereferencing and swapping the values pointed to by a and b will affect the original variables in main().
//{
//	cout << "\n\n\nValues in SwapByPointerAgain():" << endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "Address of a = " << &a << endl;
//	cout << "Address of b = " << &b << endl;
//
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void SwapByPointers2(int*& a, int*& b)	// References to the pointers will be generated in the activation record of SwapByPointers2, so swapping a and b will affect the original pointers in main().
//{
//	cout << "\n\n\nValues in SwapByPointer2():" << endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "Address of a = " << &a << endl;
//	cout << "Address of b = " << &b << endl;
//
//	int* temp = a;
//	a = b;
//	b = temp;
//}
//
//void SwapByPointersAgain2(int*& a, int*& b)	// References to the pointers will be generated in the activation record of SwapByPointersAgain2, and dereferencing and swapping the values pointed to by a and b will affect the original variables in main().
//{
//	cout << "\n\n\nValues in SwapByPointerAgain2():" << endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "Address of a = " << &a << endl;
//	cout << "Address of b = " << &b << endl;
//
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void main()
//{
//	int x = 5;
//	int y = 10;
//	int* xPtr = &x;
//	int* yPtr = &y;
//
//	cout << "Original Values:" << endl;
//	cout << "\n\n\nx = " << x << endl;
//	cout << "y = " << y << endl;
//
//	cout << "\n\n\nCheck Addresses of variables in main():" << endl;
//	cout << "\n\n\nAddress of x\t" << &x << endl;
//	cout << "Address of y\t" << &y << endl;
//	cout << "xPtr = " << xPtr << endl;
//	cout << "yPtr = " << yPtr << endl;
//	cout << "Address of xPtr = " << &xPtr << endl;
//	cout << "Address of yPtr = " << &yPtr << endl;
//
//	SwapByPointers(xPtr, yPtr);
//
//	cout << "\n\n\nValues in Main() after SwapByPointer:" << endl;
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//	cout << "*xPtr = " << *xPtr << endl;
//	cout << "*yPtr = " << *yPtr << endl;
//
//	SwapByPointersAgain(xPtr, yPtr);
//
//	cout << "\n\n\nValues in Main() after SwapByPointerAgain:" << endl;
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//	cout << "*xPtr = " << *xPtr << endl;
//	cout << "*yPtr = " << *yPtr << endl;
//
//	SwapByPointers2(xPtr, yPtr);
//
//	cout << "\n\n\nValues in Main() after SwapByPointer2:" << endl;
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//	cout << "*xPtr = " << *xPtr << endl;
//	cout << "*yPtr = " << *yPtr << endl;
//
//	SwapByPointersAgain2(xPtr, yPtr);
//
//	cout << "\n\n\nValues in Main() after SwapByPointerAgain2:" << endl;
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//	cout << "*xPtr = " << *xPtr << endl;
//	cout << "*yPtr = " << *yPtr << endl;
//}
