#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        vector<int>v(4);
        cin>>v[0]>>v[1]>>v[2]>>v[3];
        int x=max(v[0],v[1]);
        int y=max(v[2],v[3]);
        if(y<((v[0]+v[1])-x) || x<((v[2]+v[3])-y)) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1535/A
