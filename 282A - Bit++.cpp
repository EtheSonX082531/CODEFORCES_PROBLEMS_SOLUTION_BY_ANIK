#include<iostream>
using namespace std;

int main()
{
    int n,X=0;
    cin>>n;
    string s;
    while(n>0) {
        cin>>s;
        cin.ignore();
        if(s=="X++") {
            X++;
        }
        else if(s=="X--") {
            X--;
        }
        else if(s=="++X") {
            ++X;
        }
        else if(s=="--X") {
            --X;
        }
        n--;
    }
    cout<<X;
    return 0;
}
