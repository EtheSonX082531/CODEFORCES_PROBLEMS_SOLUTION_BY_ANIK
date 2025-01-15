#include<iostream>
using namespace std;

int main()
{
    int k,w;
    //k=cost of first banana
    //w=number of bananas he want
    long long n;
    //n=dollars
    cin>>k>>n>>w;
    int s=0;
    for(int i=1; i<=w; i++) {
        s=s+(k*i);
    }
    if(s<=n) {
        cout<<0;
    }
    else {
        cout<<s-n;
    }
    return 0;
}
