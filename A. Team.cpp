#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,count=0;
    cin>>n;
    while(n>0) {
        cin>>a>>b>>c;
        if((a+b+c)==2 || (a+b+c)==3) {
            count++;
        }
        n--;
    }
    cout<<count;
    return 0;
}
