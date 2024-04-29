//#include <iostream>
//using namespace std;
//
//class A {
//public:
//    void print();
//    A()
//    {
//        cout << "Constructo r A called" << endl;
//    }
//    ~A() {
//        cout << "Destructor of       A" << endl;
//    }
//};
//void A::print() {
//    cout << "----A----" << endl;
//}
//
//
//class B :public A {
//public:
//    virtual void print();
//    ~B() {
//        cout << "Destructor of B" << endl;
//    }
//};
//void B::print() {
//    cout << "----B----" << endl;
//}
//
//
//class D :public B {
//public:
//    void print() {
//        cout << "----D----" <<
//            endl;
//    }
//    ~D() {
//        cout << "Destructor of D" << endl;
//    }
//};
//
//
//
//int main()
//{
//    { A a;
//    B b;
//    D Z;
//    A* p1 = &a;
//    A* p2 = &b;
//    A* p3 = new D;
//    B* p4 = &Z;
//    p1->print();
//    p2->print();
//    p3->print();
//    p4->print();
//    }
//    return 0;
//}
