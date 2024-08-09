#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define maxn 1e6 + 7
using namespace std;
bool compare(int a, int b)
{
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    return ab > ba;
}
string maxx(vector<int> &nb)
{
    sort(nb.begin(), nb.end(), compare);
    stringstream result;
    for (auto num : nb)
    {
        result << num;
    }
    return result.str();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> nb;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        nb.push_back(num);
    }
    string result = maxx(nb);
    cout << result;
    return 0;
}
