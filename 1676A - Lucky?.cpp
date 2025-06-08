#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int left=0,right=0;
        for(int i=0,j=3; i<3,j<6; i++,j++) {
            right=right+(s[i]-'0');
            left=left+(s[j]-'0');
        }
        if(right==left) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1676/A
