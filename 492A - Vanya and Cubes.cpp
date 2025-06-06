#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    int i=1;
    int temp=1;
    while(n>=temp) {
        n=n-temp;
        i++;
        temp=temp+i;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
//https://codeforces.com/problemset/problem/492/A
