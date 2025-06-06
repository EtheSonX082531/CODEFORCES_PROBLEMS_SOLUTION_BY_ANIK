#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long int ll=1;
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        int min=*min_element(v.begin(),v.end());
        bool flag=true;
        for(int i=0; i<n; i++) {
            if(v[i]==min && flag==true) {
                ll=ll*(v[i]+1);
                flag=false;
            }
            else {
                ll=ll*v[i];
            }
        }
        cout<<ll<<endl;
    }
    return 0;
}
//https://codeforces.com/contest/1873/problem/B?mobile=false
