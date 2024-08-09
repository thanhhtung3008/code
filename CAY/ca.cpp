// Hop nhat dan cac cay
#include <bits/stdc++.h>
#define nmax 100000
#define ll long long
using namespace std;
long long n, m;
int sc;
int father[nmax];
int dau[nmax], cuoi[nmax];
int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}

int root(int x)
{
    int i = x;
    while (father[i] > 0)
    {
        i = father[i];
    }
    return i;
}
void hopnhat(int x, int y)
{
    int tam = father[x] + father[y];
    if (father[x] > father[y])
    {
        father[x] = y;
        father[y] = tam;
    }
    else
    {
        father[y] = x;
        father[x] = tam;
    }
}
ll total = 0;
void doc_xuly()
{
    int u, v, w;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        father[i] = -1;
    sc = 0;
    for (int i = 1; i <= m; i++)
    {
        if (sc == n - 1)
            break;
        cin >> u >> v >> w;
        int r1 = root(u);
        int r2 = root(v);

        if (r1 != r2)
        {
            sc++;
            hopnhat(r1, r2);
            total += w;
        }
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    doc_xuly();
    cout << total;
}
