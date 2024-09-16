#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<string>str(n);
    for(int i=0; i<n; i++) {
        cin>>str[i];
    }
    for(int i=0; i<n; i++) {
        if(str[i].size()>10) {
            cout<<str[i].front()<<str[i].size()-2<<str[i].back()<<endl;
        }
        else {
            cout<<str[i]<<endl;
        }
    }
    return 0;
}
