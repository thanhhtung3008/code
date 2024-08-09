#include <iostream>
#define ll long long

#decinne maxN 5000

using namespace std;

int N, w[maxN], sv;
int sc = 0;
void inti(ll a, ll b)
{

    if (sc == n - 1)
        return;
    if (v[a] != v[b])
    {
        if (v[a] < v[b])
        {
            for (ll t : adj[b])
            {
                v[adj[t]] = v[i];
                sc++;
            }
        }
        if (v[a] > v[b])
        {
            for (ll t : adj[a])
            {
                v[adj[t]] = v[j];
                sc++;
            }
        }
    }
}
int main()
{
    nhap();
    FOR(i, 1, n)
    v[i] = i;
}
#include <iostream>

#include <fstream>

#define maxN 5000

using namespace std;

ifstream fi(“tplt.inp”);

ofstream fo(“tplt.out”);

int N, w[maxN], sv;

int find_root(int x)
{

    int i = x;

    while (w[i] > 0)
        i = w[i];

    return i;
}

void change(int x, int y)
{

    // nap cay goc x vao cay goc y

    for (int i = 1; i <= N; i++)

        if (w[i] == x)
            w[i] = y;
}

void union_(int x, int y)
{

    int s = w[x] + w[y];

    if (w[x] > w[y])
    {

        w[x] = y;

        change(x, y);

        w[y] = s;
    }
    else
    {

        w[y] = x;

        change(y, x);

        w[x] = s;
    }
}

void process()
{

    int r1, r2, x, y;

    fi >> N;

    for (int i = 1; i <= N; i++)
        w[i] = -1;

    while (fi >> x >> y)
    {

        r1 = find_root(x);

        r2 = find_root(y);

        if (r1 != r2)
            union_(r1, r2);
    }
}

void write_output()
{

    for (int i = 1; i <= N; i++)

        if (w[i] < 0)
            sv++;

    fo << sv << endl;

    for (int i = 1; i <= N; i++)

        if (w[i] < 0)
        {

            fo << i << ” “;

            for (int j = 1; j <= N; j++)

                if (w[j] == i)
                    fo << j << ” “;

            fo << endl;
        }
}

int main()
{

    process();

    write_output();
}