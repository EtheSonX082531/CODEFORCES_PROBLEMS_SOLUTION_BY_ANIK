#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int buckets[n];
        long long int sum=0;
        for(int i=0; i<n; i++) {
            cin>>buckets[i];
            sum+=buckets[i];
        }
        int root=sqrt(sum);
        if(1LL*root*root==sum) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1915/C
