#include<iostream>
using namespace std;

int main()
{
    string s;
    int count=0,pos=0;
    cin>>s;
    for(int i=0; s[i]!='\0'; i++) {
        count++;
    }
    for(int i=0; i<count-1; i++) {
        for(int j=i+1; j<count; j++) {
            if(s[i]!='+') {
                if(s[j]!='+' && s[i]>=s[j]) {
                    swap(s[i],s[j]);
                }
            }
        }
    }
    cout<<s;
    return 0;
}
