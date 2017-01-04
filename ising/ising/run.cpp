#include<iostream>
#include<ctime>
#include "Square.h"
#define L 4
using namespace std;


int main()
{
	srand((int)time(0));
	Square square(L);
	Square *s1 = new Square(L);
	cout<<square.get_down(15)<<endl;
	cout << square.get_left(8) << endl;
	cout << s1->get_down(15) << endl;
	cout << s1->sum_neigh(4) << endl;
	delete s1;
	return 0;
}