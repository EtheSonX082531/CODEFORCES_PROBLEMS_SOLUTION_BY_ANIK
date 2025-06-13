#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,x;
        cin>>n>>x;
        vector<int>gas(n+2);
        gas[0]=0,gas[n+1]=x;
        for(int i=1; i<=n; i++) {
            cin>>gas[i];
        }
        int mx=0;
        for(int i=1; i<(n+2); i++) {
            if(i==(n+1)) {
                mx=max(((gas[i]-gas[i-1])*2),mx);
            }
            else {
                mx=max((gas[i]-gas[i-1]),mx);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
//https://codeforces.com/contest/1901/problem/A
