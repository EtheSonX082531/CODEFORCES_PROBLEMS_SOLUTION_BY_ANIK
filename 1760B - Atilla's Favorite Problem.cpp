#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int x=s[n-1]-'a'+1;
        cout<<x<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1760/B
