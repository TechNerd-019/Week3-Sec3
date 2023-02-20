#include <iostream>

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
	}
	void print()
	{
		cout << "print() is called..." << endl;
		printFancy();
		cout << x << ", " << y << endl;
	}

	void setX(int a)
	{
		x = a;
	}

	int getX()
	{
		return x;
	}

	void setY(int b)
	{
		y = b;
	}

	int getY()
	{
		return y;
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

	point p;

	// Since our variables are private, this is not allowed:
	//p.x = 1;
	//p.y = 3;

	p.setX(0);
	p.setY(0);

	p.print();
	// move value of points.
	p.move();
	// print values of new points.
	p.print();
	
	// Another way to print x and y. This is not the best way to print. It was only coded for demo purposes.
	cout << p.getX() << endl;
	cout << p.getY() << endl;

	//p.printFancy(); may only be accessed within the class. Because it is private, it cannot be called from an object.
	return 0;
}