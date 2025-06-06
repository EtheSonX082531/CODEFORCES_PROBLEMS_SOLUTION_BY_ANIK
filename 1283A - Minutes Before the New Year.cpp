#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int h,m;
        cin>>h>>m;
        int tot_min=24*60;
        int cur_min=h*60+m;
        cout<<tot_min-cur_min<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1283/A
