#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        int X,Y;
        cin>>X>>Y;
        int sum=0;
        if(X>Y) {
            for(int j=Y+1; j<X; j++) {
                if(j%2!=0) {
                    sum=sum+j;
                }
            }
        }
        else {
            for(int j=X+1; j<Y; j++) {
                if(j%2!=0) {
                    sum=sum+j;
                }
            }
        }
        v[i]=sum;
    }
    for(int i=0; i<n; i++) {
        cout<<v[i]<<endl;
    }
    return 0;
}
