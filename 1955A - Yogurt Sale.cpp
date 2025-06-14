#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,a,b;
        cin>>n>>a>>b;
        int min_cost;
        if(n==2) {
            min_cost=min((n*a),b);
        }
        else {
            int y=n;
            int x=n/2;
            n=n%2;
            min_cost=min(((x*b)+(n*a)),(y*a));
        }
        cout<<min_cost<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1955/A
