#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,Sereja=0,Dima=0;
    cin>>n;
    vector<int>Cards(n);
    for(int i=0; i<n; i++) {
        cin>>Cards[i];
    }
    int i=0,j=n-1;
    for(int k=0;k<n;k++) {
        if(k%2==0) {
            if(Cards[i]>Cards[j]) {
                Sereja=Sereja+Cards[i];
                i++;
            }
            else {
                Sereja=Sereja+Cards[j];
                j--;
            }
        }
        else {
            if(Cards[i]>Cards[j]) {
                Dima=Dima+Cards[i];
                i++;
            }
            else {
                Dima=Dima+Cards[j];
                j--;
            }
        }
    }
    cout<<Sereja<<" "<<Dima;
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/L?mobile=false
