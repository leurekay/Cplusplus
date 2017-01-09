//#ifndef ONEMCS_H
//#define ONEMCS_H
#include "Square.h"
#include <iostream>
using namespace std;
class OneMcs
{
private:
	Square lattice;
	int L;
public:
	OneMcs(int L,float T);
	~OneMcs();
	int current_conf();
	void scanLattice();
};
//#endif