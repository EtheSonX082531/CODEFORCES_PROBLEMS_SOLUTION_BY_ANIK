#include<iostream>
using namespace std;

int main()
{
    int n,bills_count=0;
    cin>>n;
    if(n>=100) {
        bills_count=bills_count+(n/100);
        n=n%100;
    }
    if(n>=20) {
        bills_count=bills_count+(n/20);
        n=n%20;
    }
    if(n>=10) {
        bills_count=bills_count+(n/10);
        n=n%10;
    }
    if(n>=5) {
        bills_count=bills_count+(n/5);
        n=n%5;
    }
    if(n>=1) {
        bills_count=bills_count+(n/1);
        n=n%1;
    }
    cout<<bills_count<<endl;
    return 0;
}
//https://codeforces.com/problemset/problem/996/A
