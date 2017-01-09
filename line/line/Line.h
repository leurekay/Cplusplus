#include "Coor.h"
class Line
{
private:
	Coor c1;
	Coor c2;
public:
	Line(int x1, int y1, int x2, int y2);
	~Line();
	void print();
	float get_len();
};