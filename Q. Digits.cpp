#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long arr[t];
    string s[t];
    for(int i=0; i<t; i++) {
        cin>>arr[i];
        s[i]=to_string(arr[i]);
    }
    for(int i=0; i<t; i++) {
        for(int j=s[i].length()-1; j>=0; j--) {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
