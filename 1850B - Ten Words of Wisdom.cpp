#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int winner=0;
        int high_quality=0;
        vector<pair<int,int>>v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i].first>>v[i].second;
            if(v[i].first<=10) {
                if(v[i].second>high_quality) {
                    high_quality=v[i].second;
                    winner=i;
                }
            }
        }
        cout<<winner+1<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1850/B
