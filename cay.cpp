/* Author : Nguyen Thanh Tung - Tran Hung Dao High School */

#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sc second
#define ll long long
#define FOR(i, l, r) for (ll i = (l); i <= (r); ++i)
#define FORD(i, r, l) for (ll i = (r); i >= (l); --i)

const ll maxn = 1e6 + 7;
const ll N = 2e5 + 7;
const long long oo = 1e18 + 7;
const long long INF = 0x3f;
const long long MOD = 1e9 + 7;
int w[maxn], N, M, sc;
int find_root(int x)
{
    int i = x;
    while (w[i] > 0)
        i = w[i];
    return i;
} /*
 // Nạp gốc x vào gốc y
 void change(int x, int y)
 {
     for (int i = 1; i <= N; i++)

         if (w[i] == x)
             w[i] = y;
 }*/
void union_(int x, int y)
{

    int s = w[x] + w[y];

    if (w[x] > w[y])
    {

        w[x] = y;

        // change(x, y);

        w[y] = s;
    }
    else
    {

        w[y] = x;

        // change(y, x);

        w[x] = s;
    }
}
void process()
{

    int r1, r2, x, y;

    cin >> N >> M;

    for (int i = 1; i <= N; i++)
        w[i] = -1;
    sc = 0;
    while (cin >> x >> y)
    {

        r1 = find_root(x);

        r2 = find_root(y);

        if (r1 != r2)
        {
            sc++;
            union_(r1, r2);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}
