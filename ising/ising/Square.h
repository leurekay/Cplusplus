//#ifndef SQUARE_H
//#define SQUARE_H
class Square
{
public:
	Square(int L);
	~Square();
	int get_ele(int index);
	int get_left(int index);
	int get_right(int index);
	int get_up(int index);
	int get_down(int index);
	int sum_neigh(int index);
	void flip(int index);
	void print_tot();
	float loc_m();
private:
	int *m_pHead;
	int m_iL;
	int m_iNum;
	int m_iSel;
};
//#endif