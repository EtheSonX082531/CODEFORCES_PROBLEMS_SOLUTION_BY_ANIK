#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        char ch[3][3];
        int countA=0,countB=0,countC=0;
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cin>>ch[i][j];
                if(ch[i][j]=='A') {
                    countA++;
                }
                else if(ch[i][j]=='B') {
                    countB++;
                }
                else {
                    countC++;
                }
            }
        }
        if(countA!=3) cout<<"A"<<endl;
        else if(countB!=3) cout<<"B"<<endl;
        else cout<<"C"<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1915/B
