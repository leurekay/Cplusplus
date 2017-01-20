#include <iostream>
#include<fstream>
using namespace std;
void readFile(char* f)
{
	cout << "readFile :" << f << endl;

}
int main()
{
	
	char fname[] = "test.txt";
	readFile(fname);
	//ofstream fout(fname);
	//fout << "heheh"<<endl;
	//fout << "123";
	ifstream fin("abc.txt");
	int  location = fin.tellg();
	fin.seekg(0, ios::end);
	int len = fin.tellg();
	fin.seekg(0);
	cout << "len :" << len << endl;
	char *c=new char[len];
	fin.read(c, len);
	cout << c<<endl;
	for (int i = 0; i < len; i++)
	{
		cout << i << " : " << c[i] << endl;
	}
	fin.close();
	delete[]c;
	
}