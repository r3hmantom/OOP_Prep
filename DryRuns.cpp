//#include <iostream>
//using namespace std;
//
//
//void mystery(int* ptr, int s)
//{
//    ptr = new int[s];
//    for (int i = 0, j = s; i < s; ++i, j--)
//        *(ptr + i) = j;
//}
//int main()
//{
//    int* ptr, s = 5;
//    mystery(ptr, s);
//    for (int i = 0; i < s; ++i)
//        cout << ptr[i] << " ";
//    delete[] ptr; ptr = NULL;
//    return 0;
//}

#include<iostream>
using namespace std;
main()
{
    int* ip = new int;
    short* sp;
    char* cp;
    *ip = 16706; //Hex 4142
    *ip = 65;
    //cp=ip;
    cp = (char*)ip;
    cout << *cp << endl;
    cout << *(cp + 1) << endl;
    sp = (short*)ip;
    cout << *sp;
}
