#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x>0) {
            v[i]=1;
        }
        else if(x<0) {
            v[i]=2;
        }
        else {
            v[i]=0;
        }
    }
    for(int i:v) {
        cout<<i<<" ";
    }
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
