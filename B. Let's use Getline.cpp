#include<iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i=0; s[i]!='\\'; i++) {
        cout<<s[i];
    }
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
