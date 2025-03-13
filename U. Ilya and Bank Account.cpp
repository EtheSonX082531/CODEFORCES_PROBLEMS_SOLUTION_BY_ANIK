#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>0) {
        cout<<n;
    }
    else if(n>-100) {
        int x=(signed)n/10;
        int y=(signed)n%10;
        cout<<max(x,y);
    }
    else {
        int x=(signed)n/10;
        int z=n%10;
        int y=(signed)x/10;
        y=(y*10)+z;
        cout<<max(x,y);
    }
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/U
