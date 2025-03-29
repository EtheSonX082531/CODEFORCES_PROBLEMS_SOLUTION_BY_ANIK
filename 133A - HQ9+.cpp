#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin>>p;
    for(int i=0; i<p.length(); i++) {
            if(p[i]=='H' or p[i]=='Q' or p[i]=='9') {
                cout<<"YES";
                return 0;
            }
    }
    cout<<"NO";
    return 0;
}
//https://codeforces.com/problemset/problem/133/A
