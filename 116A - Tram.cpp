#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max_cap=0;
    int temp=0;
    pair<int,int> arr[n];
    cin>>arr[0].first>>arr[0].second;
    temp=arr[0].second;
    max_cap=temp;
    for(int i=1; i<n; i++) {
        cin>>arr[i].first>>arr[i].second;
        temp=temp-arr[i].first+arr[i].second;
        if(max_cap<temp) {
            max_cap=temp;
        }
    }
    cout<<max_cap<<endl;
    return 0;
}
//https://codeforces.com/problemset/problem/116/A
