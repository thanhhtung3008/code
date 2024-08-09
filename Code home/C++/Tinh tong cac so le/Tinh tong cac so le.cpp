#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	cout << "Nhap so N: ";
	cin >> n;
	for (int i = 1; i <= n; i += 2)
	{
		if (i == 3)
			continue;
		else
		{
			sum += i;
		}
	}
	cout << sum << endl;
	system("Pause");
}