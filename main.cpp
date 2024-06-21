//#include<iostream>
//using namespace std;
//
//class Base {
//public:
//	Base() { cout << "Base" << endl; }
//	Base(int i) { cout << "Base" << i << endl; }
//	~Base() { cout << "Destruct Base" << endl; }
//};
//class Der : public Base {
//public:
//	Der() { cout << "Der" << endl; }
//	Der(int i) : Base(i) { cout << "Der" << i << endl; }
//	~Der() { cout << "Destruct Der" << endl; }
//};
//int main() {
//	Base a;
//	Der d(2);
//	return 0;
//}