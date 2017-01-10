#include "MC.h"
#define RP 1000

MC::MC(int L, float T,int nBath,int nMeasure) : lattice(L, T)
{
	this->L = L;
	this->T = T;
	this->nBath = nBath;
	this->nMeasure = nMeasure;
}


MC::~MC(){};
float MC::get_m()
{
	return m;
}
void MC::oneMCS()
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
void MC::bath()
{
	for (int i = 0; i < nBath; i++)
	{
		oneMCS();
	}
}
void MC::measure()
{
	float m_tot = 0.0;
	float E_tot = 0.0;
	for (int i = 0; i < nMeasure; i++)
	{
		oneMCS();
		oneMCS();
		m_tot += abs(lattice.loc_m());
	}
	m = m_tot / nMeasure;
}

