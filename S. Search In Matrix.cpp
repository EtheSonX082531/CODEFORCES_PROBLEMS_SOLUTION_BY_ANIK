#include<iostream>
using namespace std;

int main()
{
    int n,m,key;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>arr[i][j];
        }
    }
    cin>>key;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j]==key) {
                cout<<"will not take number";
                return 0;
            }
        }
    }
    cout<<"will take number";
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
