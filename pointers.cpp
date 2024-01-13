#include <iostream>
using namespace std;

void swap( int* ptra, int* ptrb ) {
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
    return;
}

int main() {
    
    //TASK 1:
    //Write the C++ code for a function swap(), which swaps the values of two integer variables.
    //Note : you cannot create global variables, and cannot pass integer variables by reference in the function.
    
    //int a = 5, b = 6;

    //int* ptra = &a;
    //int* ptrb = &b;

    //cout << "a: " << a << endl;
    //cout << "b: " << b << endl;
    //swap(ptra, ptrb);
    //cout << "a: " << a << endl;
    //cout << "b: " << b << endl;

    // ----------------------------------------------------

    //TASK 2:
    //Given two integers x and y, find their sum using pointers.
    //int x = 5, y = 5;
    //int* ptrx = &x;
    //int* ptry = &y;

    //int sum = *ptrx + *ptry;
    //cout << "Sum of " << x << " and " << y << " is: " << sum << endl;

       
    // ----------------------------------------------------

    // TASK 3:
    //int* ptr = new int;
    //cout << "Enter Int Value: ";
    //cin >> *ptr;
    //cout << "Value is: " << *ptr << endl;
    //cout << "Pointer Value is: " << ptr << endl;
    //int* ptr1 = new int;
    //*ptr1 = 9;
    //cout << *ptr1 << endl;
    //ptr1++;
    //cout << *ptr1 << endl;
    //cout << "Find Memory Leak" << endl;

    // ----------------------------------------------------

    //TASK 4:
    //Introduce 2 variables i(int), j(float) and initialize to 5, 1.5 respectively.
    //    Introduce 2 variables xPtr(int*), yPtr(float*) and assign address of i, j respectively.
    //    Print values of i, j and addresses in xPtr, yPtr.
    //    xPtr++;  yPtr++;
    //Print addresses in xPtr, yPtr.
    //    xPtr--; yPtr--;
    //Print addresses in xPtr, yPtr.
    //    xPtr = xPtr + 3; yPtr = yPtr + 4;
    //Print addresses in xPtr, yPtr.

    //int i = 5;
    //float j = 1.5;
    //
    //int* xPtr = &i;
    //float* yPtr = &j;

    //cout << "i : " << i << endl;
    //cout << "j : " << j << endl;
    //cout << "xPtr : " << xPtr << endl;
    //cout << "yPtr : " << yPtr << endl << endl;

    //xPtr++;
    //yPtr++;
    //cout << "After   xPtr++   yPtr++ " << endl;
    //cout << "xPtr : " << xPtr << endl;
    //cout << "yPtr : " << yPtr << endl << endl;


    //xPtr--;
    //yPtr--;
    //cout << "After   xPtr--   yPtr-- " << endl;
    //cout << "xPtr : " << xPtr << endl;
    //cout << "yPtr : " << yPtr << endl << endl;


    //xPtr = xPtr + 3;
    //yPtr = yPtr + 4;
    //cout << "After   xPtr+=3   yPtr+=4 " << endl;
    //cout << "xPtr : " << xPtr << endl;
    //cout << "yPtr : " << yPtr << endl << endl;




    return 0;
}


