#include <iostream>
using namespace std;
int main()
{
	int a = 1;
	int tong = 0;
	do
	{
		tong += a;
		a++;
	} while (a <= 5);
	cout << "Tong la: " << tong << endl;
	system("Pause");
}