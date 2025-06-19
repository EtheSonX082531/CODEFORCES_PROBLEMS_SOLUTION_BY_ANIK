#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,s;
        cin>>n>>s;
        int dist1=0,dist2=0;
        vector<int>v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        if(s<=v[0]) {
            cout<<v[n-1]-s<<endl;
        }
        else if(s>=v[n-1]) {
            cout<<s-v[0]<<endl;
        }
        else {
            dist1=abs((s-v[0])*2)+abs(v[n-1]-s);
            dist2=abs((v[n-1]-s)*2)+abs(s-v[0]);
            cout<<min(dist1,dist2)<<endl;
        }
    }
    return 0;
}
//https://codeforces.com/contest/2121/problem/A
