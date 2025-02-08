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
    n=n-1;
    for(int i=0,j=n; i<j; i++,j--) {
        if(v[i]!=v[j]) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
