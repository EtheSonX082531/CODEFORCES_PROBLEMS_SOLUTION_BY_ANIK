#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int x=min(a,b);
    int y=max(a,b);
    cout<<x<<" "<<(y-x)/2<<endl;
    return 0;
}
//https://codeforces.com/problemset/problem/581/A
