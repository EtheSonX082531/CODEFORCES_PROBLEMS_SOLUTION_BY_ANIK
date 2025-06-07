#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,anton=0,danik=0;
    cin>>n;
    string s;
    cin>>s;
    // count(start,end,target) helps to count target character in string
    anton=count(s.begin(),s.end(),'A');
    danik=count(s.begin(),s.end(),'D');
    if(anton>danik) {
        cout<<"Anton"<<endl;
    }
    else if(danik>anton) {
        cout<<"Danik"<<endl;
    }
    else {
        cout<<"Friendship"<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/734/A
