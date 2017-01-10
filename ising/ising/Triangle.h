//#ifndef TRIANGLE_H
//#define TRIANGLE_H
class Triangle
{
public:
	Triangle(int L, float T);
	~Triangle();
	int get_ele(int index);
	int get_left(int index);
	int get_right(int index);
	int get_up(int index);
	int get_down(int index);
	int get_upleft(int index);
	int get_downright(int index);
	int sum_neigh(int index);
	float rho(int index);
	void flip(int index);
	void print_tot();
	float loc_m();

private:
	int *m_pHead;
	int m_iL;
	int m_iNum;
	int m_iSel;
	float T;
};
//#endif