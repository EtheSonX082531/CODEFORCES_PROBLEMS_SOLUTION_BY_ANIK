#include<bits/stdc++.h>
using namespace std;

int checkPrime(long long x) {
    if(x==1) {
        return 0;
    }
    for(int i=2; i*i<=x; i++) {
        if(x%i==0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int T;
    cin>>T;
    vector<long long>v(T);
    for(int i=0; i<T; i++) {
        long long N;
        cin>>N;
        v[i]=checkPrime(N);
    }
    for(int i:v) {
        if(i==1) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
