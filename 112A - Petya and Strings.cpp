#include<iostream>
using namespace std;

int main()
{
    string s1,s2;
    bool flag=true;
    cin>>s1>>s2;
    for(int i=0; s1[i]!='\0'; i++) {
        if(s1[i]>='A' && s1[i]<='Z') {
            s1[i]=s1[i]+32;
        }
        if(s2[i]>='A' && s2[i]<='Z') {
            s2[i]=s2[i]+32;
        }
    }
    for(int i=0; s1[i]!='\0'; i++) {
        if(s1[i]>s2[i]) {
            cout<<1;
            flag=false;
            break;
        }
        else if(s1[i]<s2[i]) {
            cout<<-1;
            flag=false;
            break;
        }
    }
    if(flag==true) {
        cout<<0;
    }
    return 0;
}
