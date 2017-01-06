#include<iostream>
#include "coor.h";
using namespace std;
int main()
{
	Coor c1(3);
	c1.print_head();
	c1.print();
	c1.set_ele(8,88);
	cout << c1.get_ele(1) << endl;
	system("pause");
	return 0;
}