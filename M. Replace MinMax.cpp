#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,min,max,index1=0,index2=0;
    cin>>n;
    vector<int>v(n);
    cin>>v[0];
    min=v[0];
    max=v[0];
    for(int i=1; i<n; i++) {
        cin>>v[i];
        if(v[i]>max) {
            max=v[i];
            index1=i;
        }
        if(v[i]<min) {
            min=v[i];
            index2=i;
        }
    }
    swap(v[index1],v[index2]);
    for(int i:v) {
        cout<<i<<" ";
    }
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
