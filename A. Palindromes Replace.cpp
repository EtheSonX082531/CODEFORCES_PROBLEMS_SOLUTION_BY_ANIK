#include<iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i=0,j=(s.length())-1; i<=j; i++,j--) {
        if(s[i]=='?' && s[j]=='?') {
            s[i]='a';
            s[j]='a';
        }
        else if(s[i]=='?') {
            s[i]=s[j];
        }
        else if(s[j]=='?') {
            s[j]=s[i];
        }
        if(s[i]!=s[j]) {
            cout<<-1;
            return 0;
        }
    }
    cout<<s;
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A
