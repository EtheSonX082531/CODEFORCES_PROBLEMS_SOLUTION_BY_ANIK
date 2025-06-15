#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        string a;
        cin>>a;
        string b=a;
        reverse(b.begin(),b.end());
        for(int i=0; i<b.length(); i++) {
            if(b[i]=='p') {
                b[i]='q';
            }
            else if(b[i]=='q') {
                b[i]='p';
            }
        }
        cout<<b<<endl;
    }
    return 0;
}
//https://codeforces.com/contest/2044/problem/B?mobile=false
