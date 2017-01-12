//#ifndef MC_H
//#define MC_H
#include "Square.h"
class MC
{
private:
	Square lattice;
	int L;
	float T;
	int nBath;
public:
	MC(int L, float T, int nBath);
	~MC();
};
//#endif