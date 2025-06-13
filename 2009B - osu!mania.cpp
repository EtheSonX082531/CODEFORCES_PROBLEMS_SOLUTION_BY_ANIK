#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s[n];
        vector<int>v(n);
        for(int i=0; i<n; i++) {
            cin>>s[i];
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<4; j++) {
                if(s[i][j]!='.') {
                    v[i]=(j+1);
                    break;
                }
            }
        }
        for(int i=n-1; i>=0; i--) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/2009/B
