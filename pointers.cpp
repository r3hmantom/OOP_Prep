#include <iostream>
using namespace std;

void swap( int* ptra, int* ptrb ) {
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
    return;
}

int main() {
    
    // Task 1
    int a = 5, b = 6;

    int* ptra = &a;
    int* ptrb = &b;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    swap(ptra, ptrb);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}


//TASK 1:
//Write the C++ code for a function swap(), which swaps the values of two integer variables.
//Note : you cannot create global variables, and cannot pass integer variables by reference in the function.
//Hint : Pointers

