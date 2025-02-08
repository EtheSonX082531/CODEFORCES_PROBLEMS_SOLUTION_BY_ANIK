#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long sum=0;
    cin>>n;
    vector<long long>v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum=sum+(v[i]);
    }
    if(sum>=0) {
        cout<<sum;
    }
    else {
        cout<<sum*(-1);
    }
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
