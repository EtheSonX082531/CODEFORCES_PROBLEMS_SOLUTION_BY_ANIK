#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s1,s2;
    s1=to_string(n);
    int j=0;
    bool flag=false,checkPalin=true;
    for(int i=(s1.length()-1); i>=0; i--) {
        if(s1[i]!=s1[j]) {
            checkPalin=false;
        }
        if(flag==false) {
            if(s1[i]!='0') {
                flag = true;
                s2=s2+s1[i];
            }
        }
        else {
            s2=s2+s1[i];
        }
        j++;
    }
    cout<<s2<<endl;
    if(checkPalin) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}
