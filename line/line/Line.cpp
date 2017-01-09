using namespace std;
#include <iostream>
#include <cmath>
#include "Line.h"
Line::Line(int x1, int y1, int x2, int y2) :c1(x1, y1), c2(x2, y2)
{
}
Line::~Line(){}
void Line::print()
{
	cout << "A coor: " << "(" << c1.get_x() << "," << c1.get_y() << ")" << endl;
	cout << "B coor: " << "(" << c2.get_x() << "," << c2.get_y() << ")" << endl;
}
float Line::get_len()
{
	return sqrt(pow(c1.get_x() - c2.get_x(), 2) + pow(c1.get_y() - c2.get_y(), 2));
}