#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a,b;
        cin>>a>>b;
        if(a==0 && b==0) {
            cout<<"Yes"<<endl;
        }
        else if(a%2==0 && a!=0) {
            cout<<"Yes"<<endl;
        }
        else if(a==0 && b%2==0) {
            cout<<"Yes"<<endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/2008/A
