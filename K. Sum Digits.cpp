#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    vector<char>v(n);
    for(int i=0;i<n;i++){
    cin>>v[i];
    sum=sum+(int(v[i])-48);
    }
    cout<<sum;
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
