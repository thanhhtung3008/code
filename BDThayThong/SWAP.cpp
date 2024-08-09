#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    ifstream cin("SWAP.INP");
    ofstream cout("SWAP.OUT");
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1 && k > 0; ++i)
    {
        int max_idx = i;
        for (int j = i + 1; j < min(i + k + 1, n); ++j)
        {
            if (a[j] > a[max_idx])
            {
                max_idx = j;
            }
        }
        for (int j = max_idx; j > i; --j)
        {
            swap(a[j], a[j - 1]);
        }
        k -= (max_idx - i);
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
