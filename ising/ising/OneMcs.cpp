#include "OneMcs.h"
#define RP 1000

OneMcs::OneMcs(int L, float T) : lattice(L, T)
{
	this->L = L;
}


OneMcs::~OneMcs(){};
void OneMcs::scanLattice()
{
	for (int i = 0; i < L*L; i++)
	{
		float r = 0.0;
		r = (rand() % RP) / float(RP);
		if (r < lattice.rho(i))
		{
			lattice.flip(i);
		}
	}
}
