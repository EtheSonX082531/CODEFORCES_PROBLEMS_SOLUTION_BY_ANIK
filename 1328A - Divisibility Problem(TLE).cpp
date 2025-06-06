// Again I got TLE in test 4 but logic
// is Ok again 🤦‍♂️

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a,b,count=0;
        cin>>a>>b;
        if(a%b==0) {
            cout<<count<<endl;
        }
        else if(b>a) {
            count=b-a;
            cout<<count<<endl;
        }
        else {
            int i=b,x=0;
            while(true) {
                i=i+b;
                if(i>a) {
                    count=i-a;
                    cout<<count<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
