//#include <iostream>
//using namespace std;
//
//class Dummy {
//	float z;
//	int x, y;
//public:
//	Dummy(int x = 0, int y = 1) :x(x + 2), y(y + 3) {
//		// is trha jo arguments me hen wo sbse qareeb he is function ke, to iske private members ki values use nhi hogi
//		z = x + y + 1;
//
//		// agr private members hi access krne hen to this-> keyword use kro
//		// z = this->x + this->y + 1;
//
//	}
//	void print() {
//		cout << " X= " << x
//			<< " Y = " << y
//			<< " Z = " << z;
//	}
//};
//int main() {
//	Dummy d(10);
//	d.print();
//
//	return 0;
//}
//
