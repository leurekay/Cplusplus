#include<iostream>
#include<ctime>
#include<cmath>
//#include "Square.h"
#include "OneMcs.h"
#define RP 1000
#define N_BATH 40000
#define N_MEASURE 40000
const int nmcs = 2;
const int L = 10;
using namespace std;
void  n_mcs(float T, int n)
{
	for (int i = 0; i < n*L*L; i++)
	{

	}
}

int main()
{
	float T =0.9;
	OneMcs onemcs(L,T);

	cout << "before flip: " << s.get_ele(8) << endl;
	s.flip(8);
	cout << "after flip: " << s.get_ele(8) << endl;
	for (int i = 0; i < N_BATH; i++)
	{
		for (int i = 0; i < L*L; i++)
		{
			r = (rand() % RP) / float(RP);
			rho = exp(-s.get_ele(i)*s.sum_neigh(i) / T);
			if (r < rho)
			{
				s.flip(i);
			}
		}
	}
	s.print_tot();
	cout <<"\naverage spin is: "<< s.loc_m() << endl;
	float m_tot = 0;
	for (int i = 0; i < N_MEASURE; i++)
	{
		for (int i = 0; i < L*L; i++)
		{
			r = (rand() % RP) / float(RP);
			rho = exp(-s.get_ele(i)*s.sum_neigh(i) / T);
			if (r < rho)
			{
				s.flip(i);
			}
		}
		m_tot += abs(s.loc_m());
		//m_tot += s.loc_m();
	}
	float m;
	m = m_tot / N_MEASURE;
	cout << m << endl;
	return 0;
}