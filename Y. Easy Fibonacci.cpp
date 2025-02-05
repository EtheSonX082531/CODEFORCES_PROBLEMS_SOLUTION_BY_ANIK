#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0,y=1,temp;
    for(int i=0; i<n; i++) {
        cout<<x<<" ";
        temp=x;
        x=y;
        y=temp+y;
    }
    return 0;
}
