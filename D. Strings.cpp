#include<iostream>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2;
    s3=s1+s2;
    cout<<s1.length()<<" "<<s2.length()<<endl;
    cout<<s3<<endl;
    swap(s1[0],s2[0]);
    cout<<s1<<" "<<s2<<endl;
    return 0;
}
//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
