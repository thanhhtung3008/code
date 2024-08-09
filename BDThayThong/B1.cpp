#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SWAP.INP", "r", stdin);
    freopen("SWAP.OUT", "W", stdout);
    long long n, k;
    cin >> n >> k;

    vector<long long> arr(n);
    for (long long i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (long long i = n - 2; i >= 0 && k > 0; --i)
    {
        if (arr[i] < arr[i + 1])
        {
            long long stop_index = i;
            while (stop_index < n - 1 && arr[stop_index] < arr[stop_index + 1])
            {
                ++stop_index;
            }
            for (long long j = stop_index; j > i && k > 0; --j)
            {
                swap(arr[j], arr[j - 1]);
                --k;
                if (k == 0)
                    break;
            }
        }
    }

    for (long long i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
