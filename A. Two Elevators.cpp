#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int atime = abs(a - 1);
        int btime = abs(b - c) + abs(c - 1);

        if(atime < btime) {
            cout << 1 << endl;
        }
        else if(atime > btime) {
            cout << 2 << endl;
        }
        else {
            cout << 3 << endl;
        }
    }
    return 0;
}
//https://codeforces.com/contest/1729/problem/A?mobile=false
