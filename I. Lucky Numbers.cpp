//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
#include<iostream>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    a=n/10;
    b=n%10;
    if(b%a==0 or a%b==0) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}
