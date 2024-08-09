#include <iostream>
using namespace std;

int main()
{
	// Cách 1: Dùng for
	int n, gt = 1;
	cout << "Nhap vao so can tinh giai thua: " << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		gt = i * gt;
	}
	cout << n << " giai thua bang: " << gt << endl;
	system("Pause");

	// Cách 2: Dùng while
	int j, nguyen, gthua;
	gthua = 1;
	j = 1;
	cout << "Nhap so can tinh giai thua: " << endl;
	cin >> nguyen;
	while (j <= nguyen)
	{
		gthua = gthua * j;
		j++;
	}
	cout << gthua << endl;
	system("pause");
}
