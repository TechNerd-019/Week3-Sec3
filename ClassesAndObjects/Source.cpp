#include <iostream>

using namespace std;

struct point
{
	int x;
	int y;

public: //This line is normally not written. Everything inside a struct is public by default, unless specified otherwise.
	void print()
	{
		cout << "print() is called..." << endl;
		printFancy();
		cout << x << ", " << y << endl;
	}

	void move()
	{
		cout << "move() is called..." << endl;
		printFancy();
		x = x + 1;
		y = y + 1;
	}

private:
	void printFancy()
	{
		cout << "...........*****............" << endl;
	}
};

int main(void)
{
	cout << "Start..." << endl;

	int x; // stock datatypes are primitives. They cannot be used as objects, only be assigned a value.
	point p;
	p.x = 1; // This x has no relation with x from line 29.
	p.y = 3;

	p.print();
	// move value of points.
	p.move();
	// print values of new points.
	p.print();
	
	// p.printFancy(); may only be accessed within the struct. Because it is private, it cannot be called from an object.
	return 0;
}