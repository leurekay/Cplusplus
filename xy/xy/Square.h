//#ifndef SQUARE_H
//#define SQUARE_H
#include<cmath>
#include<iostream>
using namespace std;
class Square
{
public:
	Square(int L,float T);
	~Square();
	int get_ele(int index);
	int get_left(int index);
	int get_right(int index);
	int get_up(int index);
	int get_down(int index);
	float E_onsite(int index);
	void print_lattice();
private:
	int *conf;
	int L;
	int N;
	float T;
	//int *neighbor;
};
//#endif