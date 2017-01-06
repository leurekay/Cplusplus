class Coor
{
private:
	int *m_pHead;
	int m_iDim;
public:
	Coor(int dim);
	~Coor();
	void print();
	void print_head();
	void set_ele(int key, int value);
	int get_ele(int key);
	//int get_coor(int);
};