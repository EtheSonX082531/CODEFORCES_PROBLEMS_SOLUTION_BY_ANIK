#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char photo[n][m];
    bool flag=true;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>photo[i][j];
            if(photo[i][j]=='C' || photo[i][j]=='M' || photo[i][j]=='Y') {
                flag=false;
            }
        }
    }
    if(flag)cout<<"#Black&White"<<endl;
    else cout<<"#Color"<<endl;
    return 0;
}
//https://codeforces.com/problemset/problem/707/A
