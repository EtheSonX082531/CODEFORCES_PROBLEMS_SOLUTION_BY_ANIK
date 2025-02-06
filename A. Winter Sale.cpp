#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x,p;
    cin>>p>>x;
    float z=x/(1-(p/100));
    cout<<fixed<<setprecision(2)<<z;
    return 0;
}
