#include<bits/stdc++.h>
using namespace std;

bool checkWonderful(int n) {
    int x;
    vector<int>v;
    while(n>0) {
        x=(n%2);
        v.push_back(x);
        n=n/2;
    }
    for(int i=0; i<(v.size())/2; i++) {
        if(v[i]!=v[(v.size()-1)-i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    long long n;
    cin>>n;
    if(n%2==0) {
        cout<<"NO";
    }
    else if(checkWonderful(n)) {
        cout<<"YES";
    }
    else { 
        cout<<"NO";
    }
    return 0;
}
