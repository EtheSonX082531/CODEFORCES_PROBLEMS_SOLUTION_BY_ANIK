#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int>binary(t,0);
    for(int i=0; i<t; i++) {
        int x,y,count,decimal;
        count=0;
        cin>>x;
        while(x>0) {
            y=x%2;
            x=x/2;
            if(y==1) {
                count+=1;
            }
        }
        if(count!=0) {
            decimal=0;
            for(int i=0; i<count; i++) {
                decimal=decimal+pow(2,i);
            }
            binary[i]=decimal;
        }
    }
    for(int i=0; i<t; i++) {
        cout<<binary[i]<<endl;
    }
    return 0;
}
