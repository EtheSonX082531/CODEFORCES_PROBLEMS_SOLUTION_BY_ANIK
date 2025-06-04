#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a,b;
        cin>>a>>b;
        int min=0;
        for(int c=a; c<=b; c++) {
            min=(c-a)+(b-c);
            if(c!=b && min>((c-a+1)+(b-c+1))) {
                min=((c-a+1)+(b-c+1));
            }
        }
        cout<<min<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/2009/A
