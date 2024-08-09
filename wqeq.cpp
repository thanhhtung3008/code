#include <iostream>
#include <vector>
#include <set>
#define ll long long
using namespace std;
vector<ll> arr;
vector<ll> subset;
ll max_difsum = -1e18;
ll difsum(vector<ll> &subset)
{
    ll sum = 0;
    set<ll> distinct;
    for (ll x : subset)
    {
        sum += x;
        distinct.insert(x);
    }
    return sum - distinct.size();
}
void backtrack(ll index)
{
    if (!subset.empty())
    {
        ll cur_difsum = difsum(subset);
        if (cur_difsum > max_difsum)
        {
            max_difsum = cur_difsum;
        }
    }
    if (index == arr.size())
    {
        return;
    }
    backtrack(index + 1);
    subset.push_back(arr[index]);
    backtrack(index + 1);
    subset.pop_back();
}
int main()
{
    ll n;
    cin >> n;
    arr.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    backtrack(0);
    cout << max_difsum;
}
