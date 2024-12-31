#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n;
    char ch[n];
    for(int i=0; i<n; i++) {
        cin>>a>>b>>c;
        if((a+b)==c) {
            ch[i]='+';
        }
        else {
            ch[i]='-';
        }
    }
    for(char c:ch) {
        cout<<c<<endl;
    }
    return 0;
}
