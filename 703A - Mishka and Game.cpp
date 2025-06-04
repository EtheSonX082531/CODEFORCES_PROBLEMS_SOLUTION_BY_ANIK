#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    pair<int,int> result= {0,0};
    for(int i=0; i<n; i++) {
        int m,c;
        cin>>m>>c;
        if(m>c) {
            result.first++;
        }
        else if(c>m) {
            result.second++;
        }
    }
    if(result.first>result.second) {
        cout<<"Mishka"<<endl;
    }
    else if(result.second>result.first) {
        cout<<"Chris"<<endl;
    }
    else {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/703/A
