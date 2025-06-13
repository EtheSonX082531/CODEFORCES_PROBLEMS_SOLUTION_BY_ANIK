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
        bool crossed=false;
        pair<int,int>alperen= {0,0};
        for(int i=0; i<n; i++) {
            if(s[i]=='L') {
                alperen.first--;
            }
            else if(s[i]=='R') {
                alperen.first++;
            }
            else if(s[i]=='U') {
                alperen.second++;
            }
            else {
                alperen.second--;
            }
            if(alperen.first==1 && alperen.second==1) {
                cout<<"Yes"<<endl;
                crossed=true;
                break;
            }
        }
        if(!crossed) {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1791/B
