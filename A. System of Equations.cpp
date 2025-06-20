#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int count=0;
    for(int i=0; i<=sqrt(n); i++) {
        int j=n-(i*i);
        if((i+(j*j))==m) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
//https://codeforces.com/contest/214/problem/A?mobile=false
