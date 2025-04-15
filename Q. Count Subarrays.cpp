#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int>result(t);
    for(int i=0; i<t; i++) {
        int x;
        cin>>x;
        vector<int>v(x);
        for(int j=0; j<x; j++) {
            cin>>v[j];
        }
        long long count=0;
        for(int i=0; i<x; i++) {
            count++;
            for(int j=i+1; j<x; j++) {
                if(v[j-1]<=v[j]) {
                    count++;
                }
                else {
                    break;
                }
            }
        }
        result[i]=count;
    }
    for(int i:result) {
        cout<<i<<endl;
    }
    return 0;
}
