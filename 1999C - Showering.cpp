#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,s,m;
        cin>>n>>s>>m;
        vector<pair<int,int>>v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i].first>>v[i].second;
        }
        bool flag=false;
        if(v[0].first>=s) {
            flag=true;
        }
        else if((m-v[n-1].second)>=s) {
            flag=true;
        }
        else {
            int i=0,j=1;
            while(j<n) {
                if((v[j].first-v[i].second) >= s) {
                    flag=true;
                    break;
                }
                i++;
                j++;
            }
        }
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1999/C
