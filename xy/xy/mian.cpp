#include<iostream>
using namespace std;
#include <ctime>
#include <cmath>
#include <fstream>
#include<string>
//#include"Square.h"
#include "MC.h"
#define PI 3.1415926535
int const L =25;
float const T = 1.7;
int const nBath = 50000;

void write(int L,float T,int nBath)
{
	char fname[] = "parameter.txt";
	ofstream fout(fname);
	fout << "L  "<<L<<endl;
	fout << "T  "<<T<<endl;
	fout << "nBath  " << nBath << endl;
}
int main()
{
	write(L, T, nBath);
	int N;
	N = L*L;
	char fname[] ="data.txt";
	ofstream fout(fname);
	
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
	mc.oneMCS1();
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