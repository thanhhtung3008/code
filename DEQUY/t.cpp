#include <bits/stdc++.h>
using namespace std;
long long cd(string n, long long l)
{
    if (l == 0)
        return 0;
    long long dig = n[l - 1] - '0';
    return cd(n, l - 1) * 2 + dig;
}
int main()
{
    string n;
    cin >> n;
    long long l = n.size();
    cout << cd(n, l);
}