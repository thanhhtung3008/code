#include <iostream>
using namespace std;

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    long long n, p;
    cin >> n >> p;
    long long left = p / 2;
    long long right = n / 2 - p / 2;
    cout << min(left, right);
    return 0;
}
