//#include <iostream>
//using namespace std;
//class A
//{
//	int data[2];
//	int arr[3];
//	int ss;
//public:
//	A(int x, int y) : data{ x, y }, arr{ x + y, y - x, y % x }
//	{
//		ss = y / x;
//	}
//	A(int* ptr) : data{ *ptr, *(ptr + 1) }, arr{ 0 }
//	{
//		ss = *ptr;
//	}
//	void display() { cout << data[1] + ss + arr[2] << endl; }
//	~A() { cout << arr[0] - data[0] - ss << endl; }
//};
//int main()
//{
//	A a(22, 33);
//	int* arr = (int*)&(a);
//	arr += 3;
//	cout << arr[-2] + arr[2] << endl;
//	a = (arr - 2);
//	a.display();
//}