#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        bool flag=false;
        int count1=0,count2=0;
        vector<int>v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
            if(v[i]==1) {
                count1++;
            }
            else {
                count2++;
            }
        }
        int sum=count1+(2*count2);
        if(sum%2!=0) {
            cout<<"No"<<endl;
        }
        else {
            if(count1==0 && count2%2!=0) {
                cout<<"No"<<endl;
            }
            else {
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1472/B
