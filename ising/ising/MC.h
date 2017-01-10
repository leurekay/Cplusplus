//#ifndef MC_H
//#define MC_H
#include "Square.h"
#include  "Triangle.h"
#include <iostream>
using namespace std;
class MC
{
private:
	//Triangle lattice;
	Square lattice;
	int L;
	float T;
	int nBath;
	int nMeasure;
	float m;
	float E;
public:
	MC(int L,float T,int nBath,int nMeasure);
	~MC();
	int current_conf();
	float get_m();
	float get_E();
	void oneMCS();
	void bath();
	void measure();

};
//#endif