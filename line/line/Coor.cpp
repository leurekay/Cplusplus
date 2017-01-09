#include <iostream>
#include "Coor.h"
using namespace std;
Coor::Coor(int x, int y)
{
	this->x = x;
	this->y = y;
}
Coor::~Coor()
{
	//cout <<this <<"i am died" << endl;
}
int Coor::get_x()
{
	return x;
}
int Coor::get_y()
{
	return y;
}