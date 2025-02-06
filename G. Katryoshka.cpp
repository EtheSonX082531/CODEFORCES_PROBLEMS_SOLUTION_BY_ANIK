//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long eyes,mouths,bodies;
    cin>>eyes>>mouths>>bodies;
    long long count=min({eyes,mouths,bodies});
    eyes=eyes-count;
    mouths=mouths-count;
    bodies=bodies-count;
    if(eyes>=2 && bodies>=1){
    long long x=eyes/2;
    count=count+min(bodies,x);
    }
    cout<<count;
    return 0;
}
