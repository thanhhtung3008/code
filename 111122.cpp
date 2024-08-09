#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int start[n], end[n];
    for(int i = 0; i < n; i++) {
        cin >> start[i] >> end[i];
    }
    // Sắp xếp các chương trình theo thời gian kết thúc
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(end[j] > end[j+1]) {
                swap(end[j], end[j+1]);
                swap(start[j], start[j+1]);
            }
        }
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(end[i] > start[j]) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
