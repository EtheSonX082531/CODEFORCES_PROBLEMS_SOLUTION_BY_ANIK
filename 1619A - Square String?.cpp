#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        if(s.length()==1 || s.length()%2!=0) {
            cout<<"NO"<<endl;
        }
        else {
            bool flag=true;
            int k=(s.length()/2);
            for(int i=0,j=k; i<k; i++,j++) {
                if(s[i]!=s[j]) {
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
            }
            if(flag) {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1619/A
