#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max_l=0;
    int count=1;
    vector<int>v(n);
    cin>>v[0];
    for(int i=1; i<n; i++) {
        cin>>v[i];
        if(v[i]>v[i-1]) {
            count++;
        }
        else {
            if(max_l<count) {
                max_l=count;
            }
            count=1;
        }
    }
    if(count>max_l) {
        max_l=count;
    }
    cout<<max_l<<endl;
    return 0;
}
//https://codeforces.com/problemset/problem/702/A
