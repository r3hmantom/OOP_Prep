////Lecture Content
////1- Overview of RAM, Process Memory, Stack
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//int a =10;
//	//cout<<"Hello\n";
//	//cin>>a;
//
//
//	//--------------------------------------------------------------------------------------
//	// Test 0 - Pointer Declaration without initialization i.e. junk values 
//	// IMPORTANT NOTE: Press Ignore on exception for this check only.
//	//--------------------------------------------------------------------------------------
//	//int a ;				// a is an integer
//	////char a1;
//	//int* aPtr ;			// aPtr is pointer to an integer
//	//	
//	//cout<<"\n\n\nTesting Without Initialization...\n\n";
//	//cout<<"a =\t"<<a<<endl;
//	//cout<<"value in aPtr =\t"<<aPtr<<endl;
//
//	//--------------------------------------------------------------------------------------
//	// Test 1 - Pointer Initialization
//	//--------------------------------------------------------------------------------------
//	//int a = 999;			// a is an integer
//	//int* aPtr = 0 ;//NULL, nullptr			// aPtr is pointer to an integer
//	//int* cPtr = NULL;
//	//
//	////int* bPtr = nullptr;	//bPtr is also a pointer to integer and pointing to nothing initially	
//	//// aPtr is a null pointer now...Pointing to NOTHING...check with aPtr = NULL; as well
//	//
//	//cout<<"\n\n\nTesting Initialization...\n\n";
//	//cout<<"a =\t"<<a<<endl;
//	//cout<<"value in aPtr =\t"<<cPtr<<endl;
//
//
//	//--------------------------------------------------------------------------------------
//	// Test 2 - Pointing to specific data
//	//--------------------------------------------------------------------------------------
//
//	//int a = 999;			// a is an integer
//	//int* aPtr = 0 ;			// aPtr is pointer to an integer
//	//
//	//aPtr = NULL;				//saving a's address in aptr. aptr is pointing to a now
//	//
//	////& is Address Operator... &xyz gives address of variable xyz
//	//
//	//cout<<"\n\n\nAfter pointing to a ...\n\n";
//	//cout<<"Address of a =\t"<<&a<<endl;
//	//cout<<"Address of aPtr:\t"<<&aPtr<<endl;
//	//cout<<"value in aPtr =\t"<<aPtr<<endl;
//	//cout<<"a =\t"<<a<<endl;
//	////cout<<"*aPtr =\t"<<*aPtr<<endl;		//Dereference Operator... Gives content of cell to which aPtr is pointing, this is indirect refernce to a
//	//cout<<"Size of a:\t"<<sizeof(a)<<endl;
//	//cout<<"Size of aPtr:\t"<<sizeof(aPtr)<<endl;
//
//
//	//--------------------------------------------------------------------------------------
//	// Test 3 - Change the data of a and check what happens
//	//--------------------------------------------------------------------------------------
//
//	//int a = 999;			// a is an integer
//	//char* aPtr = &a ;			// aPtr is pointer to an integer
//	//
//	//a = 10;
//
//	//cout<<"\n\n\nAfter changing a's data ...\n\n";
//	//cout<<"Address of a =\t"<<&a<<endl;
//	//cout<<"Address of aPtr:\t"<<&aPtr<<endl;
//	//cout<<"value in aPtr =\t"<<aPtr<<endl;
//	//cout<<"a =\t"<<a<<endl;
//	//cout<<"*aPtr =\t"<<*aPtr<<endl;
//
//
//
//	//--------------------------------------------------------------------------------------
//	// Test 4 - Changing data using pointer - indirect access
//	//--------------------------------------------------------------------------------------
//	//int a = 999;			// a is an integer
//	//int* aPtr = &a ;			// aPtr is pointer to an integer
//	//
//	//*aPtr = 500;		//Changing content of a using aptr i.e. indirect reference to a.
//
//	//cout<<"\n\n\nAfter changing a's data using aPtr ...\n\n";
//	//cout<<"Address of a =\t"<<&a<<endl;
//	//cout<<"Address of aPtr:\t"<<&aPtr<<endl;
//	//cout<<"value in aPtr =\t"<<aPtr<<endl;
//	//cout<<"a =\t"<<a<<endl;
//	//cout<<"*aPtr =\t"<<*aPtr<<endl;
//
//
//	//--------------------------------------------------------------------------------------
//	// Test 5 - Take data from user and then print
//	//--------------------------------------------------------------------------------------
//	//int a = 999;			// a is an integer
//	//int* aPtr = &a ;			// aPtr is pointer to an integer
//	//
//
//	//cout<<"\n\n\nEnter value in a:\t";
//	//cin>>a;
//
//	//cout<<"\n\n\nAfter data input in a ...\n\n";
//	//cout<<"Address of a =\t"<<&a<<endl;
//	//cout<<"Address of aPtr:\t"<<&aPtr<<endl;
//	//cout<<"value in aPtr =\t"<<aPtr<<endl;
//	//cout<<"a =\t"<<a<<endl;
//	//cout<<"*aPtr =\t"<<*aPtr<<endl;
//
//
//	//--------------------------------------------------------------------------------------
//	// Test 6 - Input data using pointer
//	//--------------------------------------------------------------------------------------
//
//	//int a = 999;			// a is an integer
//	//int* aPtr = &a ;			// aPtr is pointer to an integer
//	//
//	//cout<<"\n\n\nEnter value in *aPtr:\t";
//	//cin>>*aPtr;
//
//	//cout<<"\n\n\nAfter data input in aPtr ...\n\n";
//	//cout<<"Address of a =\t"<<&a<<endl;
//	//cout<<"Address of aPtr:\t"<<&aPtr<<endl;
//	//cout<<"value in aPtr =\t"<<aPtr<<endl;
//	//cout<<"a =\t"<<a<<endl;
//	//cout<<"*aPtr =\t"<<*aPtr<<endl;
//
//
//	//--------------------------------------------------------------------------------------
//	// Test 7 - aPtr is going to point different integer
//	//--------------------------------------------------------------------------------------
//
//		//int a = 999;			// a is an integer
//		//int* aPtr = &a ;			// aPtr is pointer to an integer
//		//
//		//int b = 100;
//		//aPtr = &b;			//aPtr is pointing to b now.
//		//cout<<"\n\n\nAfter pointing to b ...\n\n";
//		//cout<<"Address of a =\t"<<&a<<endl;
//		//cout<<"Address of b =\t"<<&b<<endl;
//		//cout<<"Address of aPtr:\t"<<&aPtr<<endl;
//		//cout<<"value in aPtr =\t"<<aPtr<<endl;
//		//cout<<"a =\t"<<a<<endl;
//		//cout<<"b =\t"<<b<<endl;
//		//cout<<"*aPtr =\t"<<*aPtr<<endl;
//
//
//	//--------------------------------------------------------------------------------------
//	// Test 8 - Two pointers pointing to same integer
//	//--------------------------------------------------------------------------------------
//
//	//int a = 999;			// a is an integer
//	//int* aPtr = &a ;			// aPtr is pointer to an integer
//	//int b = 100;
//	//aPtr = &b;
//	//int* xyzVariable = aPtr;
//
//	//cout<<"\n\n\n xyzVariable ...\n\n";
//	//cout<<"Address of a =\t"<<&a<<endl;
//	//cout<<"Address of b =\t"<<&b<<endl;
//	//cout<<"Address of aPtr:\t"<<&aPtr<<endl;
//	//cout<<"Address of xyzVariable:\t"<<&xyzVariable<<endl;
//	//cout<<"value in aPtr =\t"<<aPtr<<endl;
//	//cout<<"value in xyzVariable =\t"<<xyzVariable<<endl;
//	//cout<<"a =\t"<<a<<endl;
//	//cout<<"b =\t"<<b<<endl;
//	//cout<<"*aPtr =\t"<<*aPtr<<endl;
//	//cout<<"*xyzVariable =\t"<<*xyzVariable<<endl;
//
//
//	//--------------------------------------------------------------------------------------
//	// Test 9 - Dangling Pointer
//	//--------------------------------------------------------------------------------------
//	//IMPORTANT: CHECK IN DEBUG MODE
//	//int* ptr;				//What is the value of aptr here?
//
//	//int a = 10;
//	//ptr = &a;
//	//cout << *ptr << endl;	//What will be behavior of this statement? Illegal Memory Access
//	//cin >> *ptr;			//What is this line doing? Illegal Memory Access
//
//	//cin >>ptr; 
//	
//	//Difference between above two line???
//	//--------------------------------------------------------------------------------------
//	// Test 10 - Null Pointer
//	//--------------------------------------------------------------------------------------
//	//Uncomment following piece of code and run. Why does it crash? Which line is creating problem?
//	////IMPORTANT: CHECK IN DEBUG MODE
//	//int* ptr = 0;			//What is the value of aptr here?
//	////cout << *ptr << endl;	//What will be behavior of this statement?
//	//cin >> *ptr;			//What is this line doing?
//	////Null Reference Exception
//
//return 0;
//}
//
//
///*pointer cannot be cout without being initialized
//pointer can be initialized with null using
//- nullptr
//- 0
//- NULL
//
//outputting nullptr will give 16 zeroes
//size of pointer is always 8 byetes regardless of if it is null or not
//
//
//you cant store int data in char pointer, it will say that
//"cant convert from int* to char*"
//mtlb it cant convert int address to store in the char pointer, beause int address is of type* int
//
//you can input the value in any variable by storing its address in pointer and
//then using dereferencing operator to input its value from the user
//
//an(int : T) pointer can point to different(int : T) variables
//
//
//inputting or outputting a pointer which has been uninitialized is illegal memory access
//
//inputting or outputting a nullptr is null reference exception
//
//0x hr address ke pehle aarha he, lekin print nhi hota, iske baad wale 16 characters print hote hen
//
//if a pointer is created without initializing, its default value is
//16 chote C's
//
//0xcccccccccccccccc or uske aage bracket me{ ? ? ? } likha hoga, mtlb illegal memory access hoga ise read or write krna
//
//if a pointer is created with new
//like
//0x000002059c3e6110 or aage bracket me koi garbage value pari he, not illegal memory access
//
//
//if you delte a pointer, its value becomes random address
//0x0000000000008123 or uske aage bracket me{ ? ? ? } likha hoga, isko read krna illegal memory access hoga
//mtlb dangling pointer he
//delete krne ke bad address me koi alphabet nhi*/ he
//
