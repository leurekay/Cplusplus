#include<iostream>
#include<ctime>
#define N 100000000
using namespace std;

void print_arr(int *p, int size)
{
	for (int i = 0; i < size; i++)
		cout << *(p + i) << endl;
}
void statistic(int *p, int size, int range)
{
	int *r = new int[range];
	for (int i = 0; i < range; i++)
	{
		*(r + i) = 0;
	}
	for (int i = 0; i < N; i++)
	{
		int a = 0;
		a = *(p + i);
		*(r + a) = *(r + a) + 1;
	}
	print_arr(r, range);

}

int main()
{
	srand((int)time(0));
	int range;
	cin >> range;
	int a;
	int *p = new int[N];
	for (int i = 0; i < N; i++)
	{
		a = rand() % range;
		*(p + i) = a;
	}
	//print_arr(p, N);
	statistic(p, N, range);
	delete[]p;
	return 0;
}