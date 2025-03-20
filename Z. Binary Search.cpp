#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>result(q);
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0; i<q; i++) {
        int x;
        cin>>x;
        result[i]=binary_search(v.begin(),v.end(),x);
    }
    for(int i:result) {
        if(i) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
