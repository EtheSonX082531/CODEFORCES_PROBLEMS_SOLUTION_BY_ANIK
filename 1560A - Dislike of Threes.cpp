#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int k;
        cin>>k;
        int x;
        int l=0;
        for(int i=1; i<=k+l; i++) {
            if(i%3!=0 && (i%10!=3)) {
                x=i;
            }
            else {
                l++;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1560/A
