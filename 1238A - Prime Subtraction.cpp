#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<long long>v1(t);
    vector<long long>v2(t);
    vector<bool>flag(t);
    for(int i=0; i<t; i++) {
        cin>>v1[i];
        cin>>v2[i];
        long long dif=v1[i]-v2[i];
        if(dif==1) {
            flag[i]=false;
        }
        else {
            flag[i]=true;
        }
    }
    for(bool x:flag) {
        if(x) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1238/A
