#include "coor.h";
#include<iostream>
using namespace std;
Coor::Coor(int dim)
{
	m_iDim = dim;
	//int *m_pHead = new int[dim];
	m_pHead = new int[dim];
	for (int i = 0; i < m_iDim; i++)
	{
		m_pHead[i] = i;
	}
}
Coor::~Coor()
{
	delete []m_pHead;
}
void Coor::print()
{
	for (int i = 0; i < m_iDim; i++)
	{
		cout << " " << m_pHead[i];
	}
}
void Coor::print_head()
{
	cout << "" << m_pHead << endl;
}
void Coor::set_ele(int key, int value)
{
	if (key < m_iDim && key >= 0)
	{
		m_pHead[key] = value;
	}
	else
	{
		cout << "\ninvalid range" << endl;
	}

}
int Coor::get_ele(int key)
{
	if (key < m_iDim && key >= 0)
	{
		return m_pHead[key];
	}
	else
	{
		cout << "\ninvalid range" << endl;
		return 66666;
	}
}
