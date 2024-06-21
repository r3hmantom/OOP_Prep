//#include<iostream>
//#include<string>
//using namespace std;
//
//void Fun1(int x, int& y)
//{
//	int z = 999;
//
//	cout << "\n\nEntered Fun1().\n";
//	cout << "x =\t" << x << "\ty =\t" << y << endl;
//
//	x = 111;
//	y = 222;
//
//	cout << "\n\nLeaving Fun1().\n";
//	cout << "x =\t" << x << "\ty =\t" << y << endl;
//
//	cout << "\n\n&x =\t" << &x << "\t&y=\t" << &y << endl;
//}
//
//void TestParameters()
//{
//	int a = 10;
//	int b = 20;
//
//	cout << "Before calling Fun1().\n";
//	cout << "a =\t" << a << "\tb =\t" << b << endl;
//
//	Fun1(a, b);
//
//	cout << "\n\nAfter Fun1().\n";
//	cout << "a =\t" << a << "\tb =\t" << b << endl;
//
//	cout << "\n\n&a =\t" << &a << "\t&b =\t" << &b << endl;
//}
//int& ReturnSomething()	//IMPORTANT: uncomment and check how this return type works
////int& ReturnSomething()	//IMPORTANT: uncomment and check how this return type works
//{
//	int a = 10;
//	return a;	//Check if it is giving warning in complier output
//}
//void TestReturnValue()
//{
//	int b = 0;
//	cout << &ReturnSomething() << endl;
//	b = ReturnSomething();
//
//	cout << "b = " << b << endl;
//}
//int* ReturnSomething2()
//{
//	int a = 10;
//	return &a;	//Check if it is giving warning in complier output
//}
//
//void TestReturnValue2()
//{
//	int* b = 0;
//	b = ReturnSomething2();
//
//	cout << "b = " << *b << endl;
//}
//
//
//void main()
//{
//	//TestParameters();
//	TestReturnValue();
//	//TestReturnValue2();
//}
//
////jb bhi koi function ki return type int& hoti he to wo "return x" x ka alias hoga
////or agr wo locally function ki body me create hua he to wo error dena chahiye lekin 
////visual studio error nhi deta, or value copy krdeta he or jo function return krta he wohi value sahi store krdeta he 
//// function jo value bhejta he mtlb return krta he wo alias hi he