#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Moi Nhap Vao So N Tu 1 Den 99: ";
	cin >> n;
	while (n < 0 || n > 99)
	{
		cout << "Moi Nhap Lai N Tu 1 Den 99: ";
		cin >> n;
	}
	cout << "Ban Da Nhap N Thanh Cong. N = " << n << endl;
	system("Pause");
}