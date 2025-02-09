#include<iostream>
using namespace std;

int main()
{
    int n,x=0,y=0;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>arr[i][j];
            if(j==i) {
                x=x+arr[i][j];
            }
            if((i+j)==(n-1)) {
                y=y+arr[i][j];
            }
        }
    }
    cout<<abs(x-y);
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
