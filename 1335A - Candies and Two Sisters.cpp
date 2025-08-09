#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n<=2) {
            cout<<0<<endl;
        }
        else{
         int a=(n/2)+1;
         cout <<(n-a)<< endl;
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1335/A
