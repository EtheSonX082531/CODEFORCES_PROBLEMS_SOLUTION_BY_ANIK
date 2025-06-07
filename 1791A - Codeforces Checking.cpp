#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        char c;
        cin>>c;
        if(c=='c' || c=='o' || c=='d' || c=='e' || c=='f' || c=='r' || c=='s') {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1791/A
