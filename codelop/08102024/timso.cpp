#include <iostream>
#include <map>
using namespace std;
int n, q;
int main()
{
    cin >> n >> q;
    int a[n];
    map<int, int> m;
    for (int x : a)
    {
        cin >> x;
        m[x]++;
    }
    while (q--)
    {
        int k;
        cin >> k;
        cout << m[k] << endl;
    }
}
