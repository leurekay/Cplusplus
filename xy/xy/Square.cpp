#include "Square.h"
Square::Square(int L, float T) :L(L), T(T), N(L*L)
{
	conf = new int[N];
	for (int i = 0; i < N; i++)
	{
		conf[i] = 0;
	}
}
Square::~Square()
{

}
int  Square::get_ele(int index)
{
	return conf[index];
}
int Square::get_left(int index)
{
	if (index%L == 0)
	{
		return index + L - 1;
	}
	else
		return index - 1;
}
int Square::get_right(int index)
{
	if ((index + 1) % L == 0)
	{
		return index - L + 1;
	}
	else
		return index + 1;
}
int Square::get_up(int index)
{
	if (index<L)
	{
		return index - L + N;
	}
	else
		return index - N;
}
int Square::get_down(int index)
{
	if ((N - index) <= L)
	{
		return index + L - N;
	}
	else
		return index + L;
}
float Square::E_onsite(int index)
{	
	float angL, angR, angU, angD;
	angL = conf[get_left(index)];
	angR = conf[get_right(index)];
	angU = conf[get_up(index)];
	angD = conf[get_down(index)];
	return -cos(angL) - cos(angR) - cos(angU) - cos(angD);
}
void Square::print_lattice()
{
	for (int i = 0; i < N; i++)
	{
		cout << conf[i]<<"  ";
		if ((i + 1) % L == 0)
		{
			cout << endl;
		}
	}
}