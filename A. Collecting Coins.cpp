#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int maxC=max({a,b,c});
        if((a+b+c+n)%3==0 && maxC<=((a+b+c+n)/3)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
//https://codeforces.com/contest/1294/problem/A
