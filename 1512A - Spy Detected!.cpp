#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>index(t);
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int j=0;j<n;j++){
            cin>>v[j];
        }
        int x=0;
        for(int k=0;k<n;k++){
            x=count(v.begin(),v.end(),v[k]);
            if(x==1){
                index[i]=k+1;
                break ;
            }
        }
    }
    for(int i:index){
        cout<<i<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1512/A
