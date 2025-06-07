#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,min_width=0;
    cin>>n>>h;
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if(v[i]<=h) {
            min_width++;
        }
        else {
            min_width=min_width+2;
        }
    }
    cout<<min_width<<endl;
    return 0;
}
//https://codeforces.com/problemset/problem/677/A
