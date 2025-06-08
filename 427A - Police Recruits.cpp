#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    int hired=0;
    for(int i=0; i<n; i++) {
        if(v[i]>-1) {
            hired=hired+v[i];
        }
        else if(v[i]==-1) {
            if(hired!=0) {
                hired=hired-1;
            }
            else {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
//https://codeforces.com/problemset/problem/427/A
