#include<iostream>
#include "Square.h"
using namespace std;

Square::Square(int L)
{
	m_iL = L;
	m_iNum = L*L;
	int *m_pHead = new int[m_iNum];
	for (int i = 0; i < m_iNum; i++)
	{
		m_pHead[i] = 1;
	}
	
}
Square::~Square()
{
	delete[]m_pHead;
}
int Square::get_left(int index)
{
	if (index%m_iL == 0)
	{
		return index + m_iL - 1;
	}
	else
		return index - 1;
}
int Square::get_right(int index)
{
	if ((index+1)%m_iL == 0)
	{
		return index - m_iL+1;
	}
	else
		return index + 1;
}
int Square::get_up(int index)
{
	if (index<m_iL)
	{
		return index - m_iL + m_iNum;
	}
	else
		return index - m_iL;
}
int Square::get_down(int index)
{
	if ((m_iNum-index)<=m_iL)
	{
		return index +m_iL - m_iNum;
	}
	else
		return index + m_iL;
}
int Square::sum_neigh(int index)
{

	int left=0;
	left = get_left(index);
	cout << left << endl;
	return m_pHead[left];
}