#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Moi Bam So De Chon:" << endl;
	cout << "1. Tim theo ten." << endl;
	cout << "2. Tim theo tac gia." << endl;
	cout << "3. Tim theo nha xuat ban." << endl;
	cout << "4. Tim theo tieu de." << endl;
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "Tim theo ten ..." << endl;
		break;
	case 2:
		cout << "Tim theo tac gia ..." << endl;
		break;
	case 3:
		cout << "Tim theo nha xuat ban ..." << endl;
		break;
	case 4:
		cout << "Tim theo tieu de ..." << endl;
		break;
	default:
		cout << "Khong co muc nay." << endl;
		break;
	}
	system("pause");
}