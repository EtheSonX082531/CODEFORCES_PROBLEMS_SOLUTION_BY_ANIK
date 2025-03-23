#include<bits/stdc++.h>
using namespace std;

int main()
{
    int na,nb,k,m;
    cin>>na>>nb>>k>>m;
    vector<int>a(na);
    vector<int>b(nb);
    for(int k=0; k<na; k++) {
        cin>>a[k];
    }
    for(int k=0; k<nb; k++) {
        cin>>b[k];
    }
    if(a[k-1]<b[nb-m]) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}
//https://codeforces.com/contest/572/problem/A
