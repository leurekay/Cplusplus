//#ifndef MC_H
//#define MC_H
#include "Square.h"
#include <cmath>
#include <ctime>
#define PI 3.1415926535
const int rand_range = 10000;
class MC
{
private:
	Square lattice;
	int L;
	int N;
	float T;
	int nBath;
public:
	MC(int L, float T, int nBath);
	~MC();
	float rho(int index, float rand);
	void oneMCS();
	void print_lattice();
	float get_ele(int index);

};
//#endif