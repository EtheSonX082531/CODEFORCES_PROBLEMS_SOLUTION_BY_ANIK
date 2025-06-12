#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int rotation=0,x=0;
    x=abs('a'-s[0]);
    x=min(x,26-x);
    rotation=rotation+x;
    for(int i=0; i<s.length()-1; i++) {
        x=abs(s[i]-s[i+1]);
        x=min(x,26-x);
        rotation=rotation+x;
    }
    cout<<rotation<<endl;
    return 0;
}
