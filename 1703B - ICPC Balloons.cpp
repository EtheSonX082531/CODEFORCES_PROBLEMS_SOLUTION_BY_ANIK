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
        set<char>set_ch;
        int count=0;
        for(int i=0; i<n; i++) {
            set_ch.insert(s[i]);
        }
        int x=s.length()-set_ch.size();
        count=x+(set_ch.size()*2);
        cout<<count<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1703/B
