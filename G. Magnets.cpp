#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=1;
    cin>>n;
    vector<int>magnets(n);
    cin>>magnets[0];
    for(int i=1; i<n; i++) {
        cin>>magnets[i];
        if(magnets[i-1]!=magnets[i]) {
            count++;
        }
    }
    cout<<count;
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/G?mobile=false
