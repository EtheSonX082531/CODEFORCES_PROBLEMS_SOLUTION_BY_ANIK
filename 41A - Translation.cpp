#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t,temp;
    cin>>s>>t;
    if(s.length()!=t.length()) {
        cout<<"NO"<<endl;
        return 0;
    }
    reverse(s.begin(),s.end());
    if(s==t) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/41/A
