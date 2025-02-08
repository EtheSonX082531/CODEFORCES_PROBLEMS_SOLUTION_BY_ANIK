#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    for(int i=0; i<n; i++) {
        if(v[i]<=10) {
            cout<<"A["<<i<<"]"<<" = "<<v[i]<<endl;
        }
    }
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
