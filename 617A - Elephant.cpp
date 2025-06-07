#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int count=0;
    if(x>=5) {
        count=count+x/5;
        x=x%5;
    }
    if(x>=4) {
        count=count+x/4;
        x=x%4;
    }
    if(x>=3) {
        count=count+x/3;
        x=x%3;
    }
    if(x>=2) {
        count=count+x/2;
        x=x%2;
    }
    if(x>=1) {
        count=count+x/1;
        x=x%1;
    }
    cout<<count<<endl;
    return 0;
}
//https://codeforces.com/problemset/problem/617/A
