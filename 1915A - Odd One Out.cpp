#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        vector<int>v(3);
        cin>>v[0]>>v[1]>>v[2];
        for(int i=0; i<3; i++) {
            if(count(v.begin(),v.end(),v[i])==1) {
                cout<<v[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1915/A
