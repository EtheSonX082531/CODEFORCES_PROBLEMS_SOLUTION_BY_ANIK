#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,r,d,u,i=0;
    cin>>t;
    vector<bool>flag(t);
    while(t--) {
        cin>>l>>r>>d>>u;
        if(r==l && d==l && u==l) {
            flag[i]=true;
        }
        i++;
    }
    for(bool x:flag) {
        if(x) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/2074/A
