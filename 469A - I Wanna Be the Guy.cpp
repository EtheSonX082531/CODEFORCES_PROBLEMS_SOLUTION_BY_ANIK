#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    int n,x;
    cin>>n;
    int p;
    cin>>p;
    for(int i=0; i<p; i++) {
        cin>>x;
        s.insert(x);
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++) {
        cin>>x;
        s.insert(x);
    }
    if(s.size()==n) {
        cout<<"I become the guy.";
    }
    else {
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
