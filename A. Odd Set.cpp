#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int x=2*n;
        vector<int>v(x);
        int even=0,odd=0;
        for(int i=0; i<x; i++) {
            cin>>v[i];
            if(v[i]%2==0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if(even==odd) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
//https://codeforces.com/contest/1542/problem/A?mobile=false
