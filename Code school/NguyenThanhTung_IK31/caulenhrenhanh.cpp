#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin >> t >> n;
    if(t==4||t==6||t==9||t==11)
        cout << "30 ngay";
    else 
        if (t==2)
            if (n%400==0 || (n%4==0 && n%100!=00))
                cout << "29 ngay";
            else 
                cout << "28 ngay";
        else 
            cout << "30 ngay";
    return 0;
}