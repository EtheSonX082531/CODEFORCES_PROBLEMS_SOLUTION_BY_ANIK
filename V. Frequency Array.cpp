#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    vector<int>count(m,0);
    for(int i=0; i<n; i++) {
        cin>>v[i];
        count[v[i]-1]=count[v[i]-1]+1;
    }
    for(int i:count) {
        cout<<i<<endl;
    }
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
