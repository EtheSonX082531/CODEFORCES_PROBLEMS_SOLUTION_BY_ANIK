#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool flag=true;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if(v[i]%2!=0) {
            flag=false;
        }
    }
    if(flag==true) {
        int count=0;
        bool x=true;
        while(x) {
            for(int i=0; i<n; i++) {
                v[i]=v[i]/2;
                if(v[i]%2!=0) {
                    x=false;
                    break;
                }
            }
            count++;
        }
        cout<<count;
    }
    else {
        cout<<0;
    }
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
