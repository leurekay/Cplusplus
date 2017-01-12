#include<iostream>
using namespace std;
#include <ctime>
#include <cmath>
#include"Square.h"
#define PI 3.1415926535
int main()
{
	srand(time(0));
	cout << cos(PI) << endl;
	Square lattice(5, 0.2);
	lattice.print_lattice();
	return 0;
}