#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a;
        cin>>a;
        int count=0;
        for(int i=0; i<3; i++) {
            int x;
            cin>>x;
            if(x>a) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1692/A
