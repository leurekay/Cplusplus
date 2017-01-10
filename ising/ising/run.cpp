#include<iostream>
#include<ctime>
#include<cmath>
#include <iostream>
#include <fstream>
#include <string>
//#include "Square.h"
#include "MC.h"
#define RP 1000
#define N_BATH 10000
#define N_MEASURE 10000
const int nmcs = 2;
//const int L = 10;
#define L 20
using namespace std;
void  n_mcs(float T, int n)
{	
	for (int i = 0; i < n*L*L; i++)
	{

	}
}

int main()
{
	char fname[] = "squ";
	ofstream fout(fname);
	float T =0.9;
	for (int i = 1; i < 60; i++)
	{
		T=float(i)/10.0;
		MC mc(L, T, N_BATH, N_MEASURE);
		mc.bath();
		mc.measure();
		cout << T<<"   "<<mc.get_m() << endl;
		fout << T << "   " << mc.get_m() << endl;
	}
	fout.close();
	return 0;
}