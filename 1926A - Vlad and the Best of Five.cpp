#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        if(count(s.begin(),s.end(),'A')>count(s.begin(),s.end(),'B')) {
            cout<<"A"<<endl;
        }
        else {
            cout<<"B"<<endl;
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1926/A
