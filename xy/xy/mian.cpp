#include<iostream>
using namespace std;
#include <ctime>
#include <cmath>
#include <fstream>
//#include"Square.h"
#include "MC.h"
#define PI 3.1415926535
int const L = 20;
int const nBath = 20000;
int main()
{
	int N;
	N = L*L;
	char fname[] = "data.txt";
	ofstream fout(fname);
	float T = 0.3;
	srand(time(0));
	cout << cos(PI) << endl;
	Square lattice(5, 0.2);
	lattice.print_lattice();
	MC mc(L, T, nBath);
	for (int i = 0; i < nBath; i++)
	{
		mc.oneMCS();
	}
	cout << mc.rho(4,2.25) << endl;
	mc.oneMCS();
	mc.print_lattice();
	for (int i = 0; i < N; i++)
	{
		fout << mc.get_ele(i) << "  ";
		if ((i + 1) % L == 0)
		{
			fout << "\n" ;
		}
		
	}
	cout << endl;
	return 0;
}