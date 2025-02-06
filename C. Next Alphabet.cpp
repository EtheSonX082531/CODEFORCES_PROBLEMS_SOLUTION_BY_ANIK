//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
#include<iostream>
using namespace std;

int main()
{
    char c;
    cin>>c;
    if(c!='z') {
        c=c+1;
        cout<<c;
    }
    else {
        cout<<"a";
    }
    return 0;
}
