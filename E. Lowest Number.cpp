#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    cin>>v[0];
    int low=v[0];
    int index=0;
    for(int i=1; i<n; i++) {
        cin>>v[i];
        if(v[i]<low) {
            low=v[i];
            index=i;
        }
    }
    cout<<low<<" "<<index+1;
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
