#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        int i=0;
        bool flag=true;
        while(i<n) {
            if(v[i]==1 && k>0) {
                i=i+k;
                k=0;
                continue;
            }
            if(v[i]==1 && k==0) {
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
            i++;
        }
        if(flag) {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
//https://codeforces.com/contest/2117/problem/A
