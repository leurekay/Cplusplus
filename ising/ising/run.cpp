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
#define L 10 
using namespace std;
void  n_mcs(float T, int n)
{	
	for (int i = 0; i < n*L*L; i++)
	{

	}
}

char int_char(int a)//transform int to float
{
	int len = 1;
	int temp = a;
	while (a / 10)
	{
		a = a / 10;
		if (a != 0)len++;
	}
	char *c = new char[len];
	for (int i = 0; i < len; i++)
	{
		c[len - 1 - i] = char(temp % 10+48);
		temp = temp/ 10;
		cout << c[len - 1 - i] << endl;
	}
	return *c;
}

int main()
{
	char a[4] = "123";
	cout << int_char(2253) << endl;
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