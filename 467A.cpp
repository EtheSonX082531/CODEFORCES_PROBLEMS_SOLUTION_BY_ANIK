#include<iostream>
using namespace std;

int main()
{
    int n,p,q,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>p>>q;
    if(p+2<=q && p>=0){
    count++;
    }
    }
    cout<<count;
    return 0;
}
