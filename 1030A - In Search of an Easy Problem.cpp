#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        s.insert(x);
    }
    if(s.count(1)>0) {
        cout<<"HARD"<<endl;
    }
    else {
        cout<<"EASY"<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1030/A
