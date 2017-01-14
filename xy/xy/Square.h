//#ifndef SQUARE_H
//#define SQUARE_H
#include<cmath>
#include<iostream>
#include <iomanip>
using namespace std;
class Square
{
public:
	Square(int L,float T);
	~Square();
	float get_ele(int index);
	void chang_value(int index, float value);
	int get_left(int index);
	int get_right(int index);
	int get_up(int index);
	int get_down(int index);
	float E_onsite(int index,float ang);
	float E_onsite(int index);
	void print_lattice();
private:
	float *conf;
	int L;
	int N;
	float T;
	//int *neighbor;
};
//#endif