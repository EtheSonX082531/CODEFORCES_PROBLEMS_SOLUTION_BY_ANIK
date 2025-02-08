#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x=0,y=1;
    cin>>a>>b;
    vector<char>v(a+b+1);
    bool flag=true;
    for(int i=0; i<(a+b+1); i++) {
        cin>>v[i];
        if(i==a) {
            if(v[i]!='-') {
                flag=false;
            }
        }
        else if(v[i]<'0' or v[i]>'9') {
            flag=false;
        }
    }
    if(flag==true) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
