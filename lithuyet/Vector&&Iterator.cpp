#include <bits/stdc++.h>
using namespace std;
//vector <datatype> <vector name>;
//<vector name>.push_back() : thêm phần tử
//<vector name>.size() : kích thước vector
//<vector name>.back() : phần tử cuối cùng
/*Duyệt mảng bằng con trỏ
    for(vector<datatype>::iterator/auto <variable_name> = <vector_name>.begin();<variable_name>!=<vector_name>.end();<variable_name>++)
        cout << *<tên biến> << " ";
*/
//Khai báo vector có n phần tử : vector <datatype> <vector_name>(số phần tử,giá trị)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    vector <int> v;
    long long x;
    for(long long i=0;i<n;i++)
    {
        cin >>x;
        v.push_back(x);
    }

    //Duyệt các phần tử
    for(vector<int>::iterator it = v.begin();it!=v.end();it++)
        cout << *it << " ";
    for(auto it=v.begin(),it!=v.end();it++)
        cout << *it << " ";
}
