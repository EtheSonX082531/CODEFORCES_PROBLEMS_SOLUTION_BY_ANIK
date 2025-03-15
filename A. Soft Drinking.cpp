#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ml=(k*l)/nl;  
    int s=c*d;          
    int salt=p/np;     
    cout<<min({ml,s,salt})/n<<endl; 
    return 0;
}

//https://codeforces.com/problemset/problem/151/A
