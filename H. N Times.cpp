#include<iostream>
using namespace std;

void print(int a[],char ch[],int t) {
    for(int i=0; i<t; i++) {
        for(int j=0; j<a[i]; j++) {
            cout<<ch[i]<<" ";
        }
        cout<<endl;
    }
    return ;
}

int main()
{
    int t;
    cin>>t;
    int a[t];
    char ch[t];
    for(int i=0; i<t; i++) {
        cin>>a[i];
        cin>>ch[i];
    }
    print(a,ch,t);
    return 0;
}
