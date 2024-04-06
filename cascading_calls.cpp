//#include <iostream>
//using namespace std;
//
//// CASCADING
//// to enable cascading, the function will have to return the reference variable
//// RETURN TYPE ->  &DATA_TYPE
//// RETURN VALUE -> *this  
//// "this" is object address, so when we derefernce it, we get object, then we return the alias of the object
//// we just return the simple object, the return type takes care of making it alias
//
//
//class Time {
//private:
//    int hours;
//    int minutes;
//    int seconds;
//
//public:
//    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {};
//
//    Time& setHours(int h) {
//        hours = h;
//        return *this;
//    }
//    Time& setMinutes(int m) {
//        minutes = m;
//        return *this;
//    }
//    Time& setSeconds(int s) {
//        seconds = s;
//        return *this;
//    }
//
//    void Print()
//    {
//        cout << "Time: " << hours << "//" << minutes << "//" << seconds << endl;
//    }
//};
//
//int main() {
//
//    Time t;
//    t.setHours(10).setMinutes(30).setSeconds(90);
//
//    t.Print();8
//
//    return 0;
//}
