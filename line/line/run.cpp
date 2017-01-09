#include <iostream>
using namespace std;
//#include "Coor.h"
#include "Line.h"
#include <cmath>
int main()
{
	//Coor c();
	//cout << c.get_x(1,2) << endl;
	int x1, x2, y1, y2;
	cout << "enter A coordinate: " ;
	cin >> x1 >> y1;
	cout << "enter B coordinate: " ;
	cin >> x2 >> y2;
	Line l(x1,y1,x2,y2);
	l.print();
	cout<<"the length bentween two point : "<<l.get_len()<<endl;
	return 0;
}