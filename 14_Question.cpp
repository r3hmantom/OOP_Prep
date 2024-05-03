//#include<iostream>
//using namespace std;
//
//class A {
//public:
//	A(int ii = 0) : i(ii), s(new int{ i + 1 }) {}
//
//	A(const A& abc)
//	{
//		this->i = abc.i;
//		this->s = new int(*(abc.s));
//		cout << "Out Of " << i + *s << endl;
//	}
//
//	A magic(A abc) {
//		A bcd(2);
//		return abc;A
//	}
//
//	~A() { cout << "Out A " << i << endl; }
//private:
//	int i;
//	int* s;
//};
//int main() {
//	A b(3), a(4);
//	a = b.magic(a).magic(b);
//}