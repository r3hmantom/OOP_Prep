//#include <iostream>
//using namespace std;
//
//class Car {
//public:
//    int width = 0;
//    int height = 0;
//};
//
//int main() {
//
//    Car mercedes;
//
//    // This stores address of mercedes, and we can modify by it by dereferencing the ptr
//    // pointer stores address
//    Car* ptr = &mercedes;
//
//    // This is like nickname for mercedes, mercedes and alias are exactly same, just names are different
//    // alias rerferences to object, but we just simply assign it, we can only assign nickname in one line
//    // error
//    //Car& alias;
//    //alias = mercedes;
//
//    Car& alias = mercedes;
//
//    
//    alias.width++;
//    ptr->width++;
//
//    cout << mercedes.width;
//
//    return 0;
//}
