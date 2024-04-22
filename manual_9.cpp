//#include <iostream>
//#include <conio.h>
//using namespace std;
//
//
//class Animal {
//public:
//	virtual Animal() { cout << "Animal() called." << endl; };
//	virtual const char* speak() {
//		return "speak() called";
//	}
//
//	~Animal() { cout << "~Animal() called." << endl; }
//
//};
//
//
//class Dog : public Animal { // means Dog ke liye Animal ka data public he (jo animal me bhi public he)
//public:
//	Dog() { cout << "Dog() called." << endl; };
//	const char* speak() {
//		return  "woof!";
//	}
//
//	~Dog() { cout << "~Dog() called." << endl; }
//};
//
//
//class Cat : public Animal {
//public:
//	Cat() { cout << "Cat() called." << endl; };
//	const char* speak() {
//		return "mew!";
//	}
//
//	~Cat() { cout << "~Cat() called." << endl; }
//};
//
//class Sheep : public Animal {
//public:
//	Sheep() { cout << "Sheep() called." << endl; };
//	const char* speak() {
//		return "bleat!";
//	}
//
//	~Sheep() { cout << "~Sheep() called." << endl; }
//};
//class Cow : public Animal {
//public:
//	Cow() { cout << "Cow() called." << endl; };
//	const char* speak() {
//		return "mop";
//	}
//
//	~Cow() { cout << "~Cow() called." << endl; }
//};
//class Horse : public Animal {
//public:
//	Horse() { cout << "Horse() called." << endl; };
//	const char* speak() {
//		return "neigh";
//	}
//
//	~Horse() { cout << "~Horse() called." << endl; }
//};
//int main()
//{
//	// EXERCISE 7
//
//	const int size = 3;
//	Animal* myPets[size];
//
//
//	int i = 0;
//	while (i < size)
//	{
//		cout << "Press 1 for a Dog and 2 for a Cat, 3 for Cow, 4 for Horse, 5 for Sheep" << endl;
//		switch (_getch())
//		{
//		case '1':
//			myPets[i] = new Dog; // *(myPets + i ) = & dog 
//			cout << "Dog added at position " << i << endl << endl;
//			i++;
//			break;
//		case '2':
//			myPets[i] = new Cat;
//			cout << "Cat added at position " << i << endl << endl;
//			i++;
//			break;
//		case '3':
//			myPets[i] = new Cow;
//			cout << "Cow added at position " << i << endl << endl;
//			i++;
//			break;
//		case '4':
//			myPets[i] = new Horse;
//			cout << "Horse added at position " << i << endl << endl;
//			i++;
//			break;
//		case '5':
//			myPets[i] = new Sheep;
//			cout << "Sheep added at position " << i << endl << endl;
//			i++;
//			break;
//		default:
//			cout << "Invalid input. Enter again." << endl << endl;
//			break;
//		}
//	}
//
//	for (i = 0; i < size; i++)
//		cout << myPets[i]->speak() << endl;
//
//
//	for (i = 0; i < size; i++)
//		delete myPets[i];
//
//
//
//	// EXERCISE 5 + 6
//	//const int size = 5;
//	//Animal* myPets[size];
//
//
//	//int i = 0;
//	//while (i < size)
//	//{
//	//	cout << "Press 1 for a Dog and 2 for a Cat." << endl;
//	//	switch (_getch())
//	//	{
//	//	case '1':
//	//		myPets[i] = new Dog; // *(myPets + i ) = & dog 
//	//		cout << "Dog added at position " << i << endl << endl;
//	//		i++;
//	//		break;
//	//	case '2':
//	//		myPets[i] = new Cat;
//	//		cout << "Cat added at position " << i << endl << endl;
//	//		i++;
//	//		break;
//	//	default:
//	//		cout << "Invalid input. Enter again." << endl << endl;
//	//		break;
//	//	}
//	//}
//
//	//for (i = 0; i < size; i++)
//	//	cout << myPets[i]->speak() << endl;
//
//
//	//for (i = 0; i < size; i++)
//	//	delete myPets[i];	
//
//
//
//
//
//
//	// EXERCISE 4
//	//const int size = 2;
//	//Animal* myPets[size];
//	//Cat whiskers;
//	//Dog mutley;
//
//
//	//myPets[0] = &whiskers;
//	//myPets[1] = &mutley;
//
//
//	//for (int i = 0; i < size; i++)
//	//	cout << myPets[i]->speak() << endl;
//
//
//
//	// EXERCISE 3
//	// personal notes: virtual keyword in base class says, that use the function of the object, that the pointer is pointing to, jo pointer me store hoga, uska function call kro, naaa ke parent ka
//	//Dog lassie;
//	//Animal* myPet = &lassie;
//	//cout << myPet->speak() << endl;
//
//
//
//
//	// EXERCISE 2
//	//Animal objAnimal;
//	//Dog objDog;
//	//Animal* ptrAnimal = &objDog;
//	//Dog* ptrDog = &objAnimal;
//
//	//cout << objAnimal.speak() << endl;
//	//cout << objDog.speak() << endl;
//	//cout << ptrAnimal->speak() << endl; // jis type ka pointer hoga, usi ka function call hoga, unless you explicitly use other syntax like below, or make the parent class function as virtual
//	//cout << ptrDog->Animal::speak() << endl;
//
//
//	return 0;
//}
