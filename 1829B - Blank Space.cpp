#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        int blank=0;
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        int x=0;
        for(int i=0; i<n; i++) {
            if(v[i]==0) {
                x++;
            }
            else {
                if(blank<x) {
                    blank=x;
                }
                x=0;
            }
        }
        if(x>blank) {
            blank=x;
        }
        cout<<blank<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1829/B
