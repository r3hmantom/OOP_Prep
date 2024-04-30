//#include <iostream>
//using namespace std;
//
//
//// Templates in functions
//// simple template bnane ke liye template keyword likho, phr angle brackets me typename ke sath type identifier likhdo
//template <typename T>
//T get(T num)
//{
//	return num;
//}
//
//// Templates in classes
//template <typename T>
//class Pair {
//private:
//	T data;
//public:
//	Pair(T _data)
//	{
//		data = _data;
//	}
//	T getData();
//};
//
//template <typename T>
//T Pair<T>::getData()
//{
//	return data;
//}
//
//// agr function ke bahir definitions likhni hon, to phr class name ke sath angle brackets me datatype bhi likhenge 
//// ke kiske liye ap wo function likh rhe ho, agr T use kroge to T ko define bhi kroge pehle
//// template keyword se template <typename T>
//
//
////template <typename T>
////T Pair<int>::getData()
////{
////
////}
//
//
//
//
//// Different function for every datatype instance
//// isko implement krne ke liye sbse pehle T datatype ki main class bnaenege
//// uske baad uske jo bhi datatype ke liye alehda alehda se function likhne hen
//// unke liye usi name se dbara class bnaenge
//// or dubara class bnate waqt " template <> " khali chordenge, q ke ab hame T datatype nhi chahiye
//// uske baad class name ke aage angle brackets me wo datatype daal denge, jis datatype ke liye hm wo class instance 
//// bnana chah rhe hen
//
//
//// Example: car ki class, int , float, ke liye different behave kregi
////  I want ke getCarData data type bhi print kre sath
//// abhi generic type ke sath to wo hr data type ko print krdeti he, usko pata nhi hota ke konsa datatype he
//// isliye we make different class types for different types to implement this behaviour
//
//
//// generic type ke liye car
//template <typename T>
//class Car
//{
//	T carData;
//
//public:
//	Car(T);
//	T getCarData();
//};
//
//template <typename T>
//Car<T>::Car(T value)
//{
//	carData = value;
//}
//
//template <typename T>
//T Car<T>::getCarData()
//{
//	cout << "This is generic data type: ";
//	return carData;
//}
//
//// implmenting for int
//// ye class ke apne data members or apne functions honge irrespective of other classs
//template <>
//class Car<int> {
//	int data;
//public:
//	Car(int = 0);
//	int getCarData();
//};
//
//Car<int>::Car(int num)
//{
//	data = num;
//}
//
//int Car<int>::getCarData()
//{
//	cout << "This is int: ";
//	return data;
//}
//
////==============================================================================
//// passing values using angle brackets
//
//template <typename T, int num>
//class Rope
//{
//	T head;
//	int tail;
//public:
//	Rope(T);
//	T getHead();
//	void getTail();
//};
//
//template<typename T, int num>
//Rope<T, num>::Rope(T value)
//{
//	head = value;
//	tail = num;
//}
//
//template<typename T, int num>
//T Rope<T, num>::getHead()
//{
//	cout << "Head: ";
//	return head;
//}
//
//
//template<typename T, int num>
//void Rope<T, num>::getTail()
//{
//	cout << endl << "Tail: ";
//	return num;
//}
//
//
//int main() {
//
//
//	// ab jahan angle brackets laga ke data type define krte hen instance ki, hm wahan values bhi pass krskte hen
//
//	Rope<float, 50> rope(45.9);
//
//	cout << rope.getHead() << endl;
//	cout << rope.getTail() << endl;
//
//
//
//
//
//
//	// ==================================================================================
//
//
//	// agr specified template ke alehda se functions bnane hon, ke agr hm float datatype wali class ki instance use krrhe hen
//	// to uska function different call ho, us function se jb hm int ke sath call kren
//
//	/*Car<int> car1(45);
//	cout << car1.getCarData() << endl;
//
//	Car<float> car2(45.99);
//	cout << car2.getCarData() << endl;*/
//
//
//
//	// ==================================================================================
//
//
//	// agr class ke kisi member ki datatype ko amriyat deni ho, ke wo jise chahe apne andar sama le
//	// to uske liye class definition se pehle template keyword use krke <typename T> "T" ko define krdo 
//	// or usko class ke andar use krlo
//	// lekin yaad rkho ke jb class ki instance bnaoge to angle brackets use krni hi prengi ke konsi data type
//	// use krrhe ho aap, class ke case me konsi datatype ki class instance use krni hoti he, pata nhi hota
//	// because hm dirctly T pass nhi krrhe, balke constructor ke through pass krrhe hen
//	// function ke case me hm directly pass krrhe the, isliye infer hojata tha
//
//
//	// class ke jb member functions bahir implement krne hen class ke, to wo same template use krni he
//	// jo class bnate waqt use ki thi
//
//	//Pair<int> pair1(4);
//	//Pair<int> pair2(4.5);
//	//Pair<int> pair3('c');
//
//	///*Pair<int> pair1(4);
//	//Pair<float> pair2(4.5);
//	//Pair<char> pair3('c');*/
//
//	//cout << pair1.getData() << endl;
//	//cout << pair2.getData() << endl;
//	//cout << pair3.getData() << endl;
//
//
//	// ==================================================================================
//
//	// agr explicity int nhi likhte to wo simple return krdega, nhi to int wala function hi use krega
//	// jb template <typename T> se koi data type (T) define krte hen
//	// to hr ek possible data type ki instance bn jaati he, or phr hmne
//	// jo instance use krni hoti he, usko hm angle brackets me likhte
//	// agr angle brackets na dalen to wo khudi infer krleta he ke konsi type use ki hui he
//
//	//cout << get<int>(4) << endl; 
//	//cout << get<int>(4.5) << endl;
//	//cout << get<int>('c') << endl;
//
//	// ==================================================================================
//
//	return 0;
//}
//
