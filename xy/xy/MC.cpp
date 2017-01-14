#include "MC.h"
MC::MC(int L, float T, int nBath) :lattice(L, T),L(L), T(T),N(L*L), nBath(nBath)
{

}
MC::~MC()
{

}
float MC::rho(int index, float rand)
{
	float E_old, E_new,val;
	E_old = lattice.E_onsite(index);
	E_new = lattice.E_onsite(index, rand);
	val = exp((E_old - E_new) / T);
	if (val < 1)return val;
	else
	{
		return 1;
	}
}
void MC::oneMCS()
{
	for (int i = 0; i < N; i++)
	{
		float randAng;
		randAng = (rand() % 360)*2*PI/360;
		float r;
		r = (rand() % rand_range) / float(rand_range);
		if (r < rho(i, randAng))
		{
			lattice.chang_value(i, randAng);
		}
	}
}
void MC::print_lattice()
{
	lattice.print_lattice();
}
float MC::get_ele(int index)
{
	return lattice.get_ele(index);
}