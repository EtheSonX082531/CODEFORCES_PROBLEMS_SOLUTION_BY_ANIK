#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<long long>arr(t);
    for(int i=0; i<t; i++) {
        int x;
        arr[i]=1;
        cin>>x;
        for(int j=1; j<=x; j++) {
            arr[i]=arr[i]*j;
        }
    }
    for(int i=0; i<t; i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
}
