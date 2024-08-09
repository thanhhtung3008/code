#include <bits/stdc++.h>
using namespace std;
int main()
{
    float phut,phi=0;
    const int goc = 25000;
    cin >> phut;
    if (phut > 200)
        phi = (phut-200)*200 + 150*400 + 50*600;
    else if (phut >50)
        phi = (phut-50)*400 + 50*600;
    else
        phi=phut*600;
    cout << (goc+phi);
}
