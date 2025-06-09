#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        bool flag=true;
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
            if(count(v.begin(),v.end(),v[i])>1){
            flag=false;
            }
        }
        (flag)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1742/B
