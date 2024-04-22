//#include <iostream>
//using namespace std;
//
//class A
//{
//private:
//    int a;
//    int val;
//    static int i;
//public:
//    A(int value = 0) : a(i), val(value) {
//        i++;
//        cout << "Constructor called for a = " << a << " with value = " << value << endl;
//    }
//    A(const A& b) : a(i), val(b.val) {
//        i++;
//        cout << "Copy Constructor called for a = " << a << endl;
//    }
//    ~A() {
//        cout << "Destructor Constructor called for a = " << a << endl;
//    }
//    A clone(A b) {
//        cout << "Cloned Object b with a = " << b.a << endl;
//        A c;
//        return b;
//    }
//};
//
//int A::i = 0;
//
//int main() {
//    A temp(1), temp2(2);
//    A temp3 = temp.clone(temp2);
//
//
//    return 0;
//}