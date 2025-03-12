#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i=0;
    cin>>t;
    vector<int>v(t);
    while(t--) {
        int n;
        cin>>n;
        if(n==1) {
            cin>>v[i];
        }
        else {
            int append=0;
            for(int j=0; j<n; j++) {
                int z;
                cin>>z;
                append=append+z;
            }
            v[i]=append-(n-1);
        }
        i++;
    }
    for(int x:v) {
        cout<<x<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/2074/B
