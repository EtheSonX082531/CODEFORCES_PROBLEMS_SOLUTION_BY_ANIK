#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<bool>sieve(m+1,true);
    for(int i=2; i<=m; i++) {
        if(sieve[i]==true) {
            for(int j=i*i; j<=m; j=j+i) {
                sieve[j]=false;
            }
        }
    }
    if(sieve[m]==false) {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=n+1; i<m; i++) {
        if(sieve[i]==true) {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
//https://codeforces.com/problemset/problem/80/A
