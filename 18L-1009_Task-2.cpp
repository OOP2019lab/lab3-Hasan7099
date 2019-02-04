#include <iostream>
#include "Task-2.h"

using namespace std;

void main()
{
	double length = 5;
	double width = 3;
	rectangle sample;
	sample.set_length(length);
	sample.set_width(width);
	//cout << endl;
	sample.draw(length, width);
	//cout << "Area is : " << sample.area(length, width) << endl;
	sample.rotate_rect();

	//cout << endl << "Length is : " <<sample.get_length() << endl;
	system("pause");
}