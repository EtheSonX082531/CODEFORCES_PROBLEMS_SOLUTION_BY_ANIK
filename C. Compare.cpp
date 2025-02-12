#include<iostream>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0; i<s1.length(); i++) {
        if(s1[i]!=s2[i]) {
            if(s1[i]>='A' && s1[i]<='Z') {
                cout<<s1;
            }
            else if(s2[i]>='A' && s2[i]<='Z') {
                cout<<s2;
            }
            else if(s1[i]<s2[i]) {
                cout<<s1;
            }
            else {
                cout<<s2;
            }
            return 0;
        }
    }
    cout<<s1;
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
