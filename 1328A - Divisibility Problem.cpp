// I got TLE using this code
// Logic is ok but need to be efficient 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a,b,count=0;
        cin>>a>>b;
        while(true) {
            if(a%b==0) {
                cout<<count<<endl;
                break;
            }
            else {
                a=a+1;
                count++;
            }
        }
    }
    return 0;
}
