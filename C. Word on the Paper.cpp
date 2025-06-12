#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        string s[8];
        for(int i=0; i<8; i++) {
            cin>>s[i];
        }
        
        string str="";
        int x=-1;
        
        for(int i=0; i<8; i++) {
            if(count(s[i].begin(),s[i].end(),'.')!=8 && x==-1) {
                for(int j=0; j<8; j++) {
                    if(s[i][j]!='.') {
                        x=j;
                        str=str+s[i][x];
                        break;
                    }
                }
            }
            else if(s[i][x]!='.' && x!=-1){
                str=str+s[i][x];
            }
        }
        cout<<str<<endl;
    }
    return 0;
} 
//https://codeforces.com/contest/1850/problem/C
