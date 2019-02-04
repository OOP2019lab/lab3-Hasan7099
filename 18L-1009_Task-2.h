#include <iostream>

using namespace std;

class rectangle
{
public:
	double get_width();
	double get_length();
	double area(double l, double w);
	void set_width(double w);
	void set_length(double l);
	void rotate_rect();
	void draw(int l, int w);
private:
	double length = 0.0;
	double width = 0.0;
};

double rectangle::get_length()
{
	return length;
}

double rectangle::get_width()
{
	return width;
}

double rectangle::area(double l, double w)
{
	return (length * width);
}

void rectangle::set_length(double l)
{
	length = l;
}

void rectangle::set_width(double w)
{
	width = w;
}

void rectangle::rotate_rect()
{
	int temp = length;
	length = width;
	width = temp;
}

void rectangle::draw(int l, int w)
{
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}