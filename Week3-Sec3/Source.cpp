#include <iostream>


struct Point
{
	int x;
	int y;

	void Print()
	{
		std::cout << x << ',' << y << std::endl;
	}

	void move()
	{
		x = x + 1;
		y = y + 1;
	}
};


int main(void)
{

	std::cout << "Start..." << std::endl;

	Point p1;
	Point p2;

	p1.x = 2;
	p1.y = 3;

	p2.x = 4;
	p2.y = 5;

	p1.Print();
	p1.move();
	p1.Print();

	return 0;
}