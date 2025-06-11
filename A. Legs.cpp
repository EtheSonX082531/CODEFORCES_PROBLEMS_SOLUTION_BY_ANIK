#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,animal=0;
        cin>>n;
        if(n>=4) {
            animal=n/4;
            n=n%4;
        }
        if(n>=2) {
            animal=animal+(n/2);
        }
        cout<<animal<<endl;
    }
    return 0;
}
//https://codeforces.com/contest/1996/problem/A?mobile=false
