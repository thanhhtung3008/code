#include <bits/stdc++.h>
using namespace std;
ifstream fi("b5.inp");
ofstream fo("b5.out");
int n,k,a[1009],ok,cnt;
set<int> se;
void next()
{
    int i = k;
    while(i >= 1 && a[i] == n-k+i){
    --i;
    }
    if(i == 0)
    {
        fo << k <<endl;
    }
    else{
        a[i]--;
        for(int j=i+1;j<=k;j++) a[j] = a[j-1]+1;
            int cnt =0;
        for(int i=1;i<=k;i++)
        {
            if(se.find(a[i]) == se.end()){
                ++cnt;
            }
        }
        fo <<cnt<<endl;
    }
}
int main()
{
    int t;
    fi >> t;
    while(t--){
        fi >> n >>k;
        for(int i=1;i<=k;i++){
            fi >> a[i];
            se.insert(a[i]);
        }
        next();
        se.clear();
    }
    return 0;
}
