#include<bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

signed main() {
  // freopen("input.inp","r",stdin);
   //freopen("output.out","w",stdout);
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }
   long long result = 0;
    for (long long mask = 1; mask < (1 << n); ++mask) {
        long long sum = 0, numElements = 0;
        for (long long i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                sum += a[i];
                numElements++;
            }
        }
        if (numElements > 0 && sum % numElements == 0) {
            result = (result + 1) % MOD;
        }
    }
    cout << result << endl;
}
