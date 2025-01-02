#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,max=0;
    cin>>a>>b>>c;
    vector<int>v(5);
    v[0]=a*b*c;
    v[1]=a*(b+c);
    v[2]=a+(b*c);
    v[3]=(a+b)*c;
    v[4]=a+b+c;
    for(int i:v) {
        if(i>max) {
            max=i;
        }
    }
    cout<<max;
    return 0;
}
