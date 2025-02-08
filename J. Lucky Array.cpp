#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    cin>>v[0];
    int min=v[0];
    for(int i=1; i<n; i++) {
        cin>>v[i];
        if(v[i]<min) {
            min=v[i];
        }
    }
    int count=0;
    for(int i=0; i<n; i++) {
        if(v[i]==min) {
            count+=1;
        }
    }
    if(count%2!=0) {
        cout<<"Lucky";
    }
    else {
        cout<<"Unlucky";
    }
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
