#include<iostream>
using namespace std;

int main()
{
    //1 is not prime!
    int x;
    cin>>x;
    if(x==1) {
        cout<<"NO";
        return 0;
    }
    for(int i=2; i*i<=x; i++) {
        if(x%i==0) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
