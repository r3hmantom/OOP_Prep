// 2002 - Final - Spring - OOP


// QUESTION 3
#include <iostream>
using namespace std;
class Triple {
private:
	float x, y, z;
public:
	float getX() { return x; };
	float getY() { return y; };
	float getZ() { return z; };

	void setX(float _x) { x = _x; };
	void setY(float _y) { y = _y; };
	void setZ(float _z) { z = _z; };

	Triple(float _x = 0, float _y = 0, float _z = 0)
	{
		x = _x;
		y = _y;
		z = _z;
	}

	// operators overloading
	Triple operator+(const Triple& operand)
	{
		Triple result(this->x + operand.x, this->y + operand.y, this->z + operand.z);
		return result;
	}

	friend ostream& operator<<(ostream& output, const Triple& obj);
	void operator=(Triple& obj)
	{
		this->setX(obj.getZ());
		this->setY(obj.getX());
		this->setZ(obj.getY());
	}

	void operator++(int)
	{
		this->setX(this->x++);
		this->setZ(this->z++)
	}

	void operator()(float _x, float _y, float _z)
	{
		this->setX(_x);
		this->setY(_y);
		this->setZ(_z);

	}

};
	
ostream& operator<<(ostream& output, Triple& obj)
{
	output << obj.getX() << obj.getY() << obj.getZ() << endl;  // agr getters use krne hen to const nhi aega param me
	return output;
}


int main()
{


	return 0;
}











//------------------------------------------------------------------------------------------------




// QUESTION 2
//Write a program that has an abstract base class named Quad.This class should have four
//member data variables(floats) representing side lenghts and a pure virtual function Area.
//It should also have a method for setting the data variables.Derive a class Rectangle from
//Quad and override the Area method so that it returns the area of the Rectangle.Write a
//main function that creates a Rectangle and sets the side lengths.Also write a top - level
//function that will take a parameter of type Quad and return the value of the appropriate
//Area function.




//------------------------------------------------------------------------------------------------



//// QUESTION 1
//#include <iostream>
//
//class Base {
//public:
//    Base() {
//        std::cout << "Base" << std::endl;
//    }
//
//    Base(int i) {
//        std::cout << "Base" << i << std::endl;
//    }
//
//    ~Base() {
//        std::cout << "Destruct Base" << std::endl;
//    }
//};
//
//class Der : public Base {
//public:
//    Der() {
//        std::cout << "Der" << std::endl;
//    }
//
//    Der(int i) : Base(i) {
//        std::cout << "Der" << i << std::endl;
//    }
//
//    ~Der() {
//        std::cout << "Destruct Der" << std::endl;
//    }
//};
//
//int main() {
//    Base a;
//    Der d(2);
//    return 0;
//}
