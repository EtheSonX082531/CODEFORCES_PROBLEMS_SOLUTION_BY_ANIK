#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int luckyNums[14]= {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0; i<14; i++) {
        if(n%luckyNums[i]==0) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/J
