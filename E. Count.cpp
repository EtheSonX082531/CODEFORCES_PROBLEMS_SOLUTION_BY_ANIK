#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.length(); i++) {
        sum=sum+(s[i]-48);
    }
    cout<<sum;
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
