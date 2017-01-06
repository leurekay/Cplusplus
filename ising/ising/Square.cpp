#include<iostream>
#include "Square.h"
using namespace std;

Square::Square(int L)
{
	m_iL = L;
	m_iNum = L*L;
	m_pHead = new int[m_iNum];
	for (int i = 0; i < m_iNum; i++)
	{
		m_pHead[i] = 1;
	}
}
Square::~Square()
{
	delete[]m_pHead;
}
int  Square::get_ele(int index)
{
	return m_pHead[index];
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
	return m_pHead[get_down(index)] + m_pHead[get_up(index)] + m_pHead[get_left(index)] + m_pHead[get_right(index)];
}
void Square::flip(int index)
{
	m_pHead[index]= -m_pHead[index];
}
void Square::print_tot()
{
	for (int i = 0; i < m_iNum; i++)
	{
		cout << m_pHead[i] << " ";
	}
}
float Square::loc_m()
{
	int tot=0;
	for (int i = 0; i < m_iNum; i++)
	{
		tot += m_pHead[i];
	}
	return tot / float(m_iNum);
}