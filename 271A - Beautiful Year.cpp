#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,x;
    cin>>y;
    x=y+1;
    while(true) {
        string s=to_string(x);
        set<char>st;
        st.insert(s[0]);
        st.insert(s[1]);
        st.insert(s[2]);
        st.insert(s[3]);
        if(st.size()==4) {
            cout<<x<<endl;
            return 0;
        }
        else {
            x++;
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/271/A
