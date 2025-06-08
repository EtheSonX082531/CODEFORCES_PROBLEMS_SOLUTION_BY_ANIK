#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    set<char>st;
    getline(cin,s);
    for(int i=1; i<s.length()-1; i++) {
        if(s[i]!=',' && s[i]!=' ') {
            st.insert(s[i]);
        }
    }
    cout<<st.size()<<endl;
    return 0;
}
//https://codeforces.com/problemset/problem/443/A
