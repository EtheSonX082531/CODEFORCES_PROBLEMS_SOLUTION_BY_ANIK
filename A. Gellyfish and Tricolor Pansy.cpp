#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int min1=min(a,c);
        int min2=min(b,d);
        if(min1==min2) {
            cout<<"Gellyfish"<<endl;
        }
        else if(min1>min2) {
            cout<<"Gellyfish"<<endl;
        }
        else {
            cout<<"Flower"<<endl;
        }
    }
    return 0;
}
