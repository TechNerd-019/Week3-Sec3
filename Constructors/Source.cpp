#include <iostream>
#include <string>

using namespace std;

class point
{
public:			// A class is similar to a struct, except that everything is set to private by default, unless specified otherwise.
private:
	int x;
	int y;

public: // Hence, this line is now a must-to-have for a class.

	point()			// This is a constructor.
	{
		cout << "point() constructor is called." << endl;
		x = 0;
		y = 0;
		cout << endl;
	}

	point(int a, int b)
	{
		cout << "point(int a, int b) constructor is called." << endl;
		x = a;
		y = b;
	}

	point(int a)
	{
		cout << "point(int a) constructor is called." << endl;
		x = a;
		y = 0;
	}
	void print()
	{
		cout << "print() is called..." << endl;
		cout << x << ", " << y << endl;
		cout << endl;
	}
};

int main(void)
{
	cout << "Start..." << endl;

	// A constructor is called automatically when object is created.
	// Constructors CAN be overloaded.
	// Take a look at syntax differences between a constructor and a function.
	point p1;
	point p2(1, 3);
	point p3(4);
	p2.print();

	// Demo of strings in C++. How Object Oriented programming makes code reussable.
	string name = string("Akrem.");
	cout << name << endl;
	cout << "Length of name: " << name.length() << endl;
	cout << "Char at 0: " << name.at(0) << endl;

	return 0;
}