#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = to_string(n);
        bool flag = true;
        if (s.length() < 3) {
            flag = false;
        }
        else if (s[0] != '1' || s[1] != '0') {
            flag = false;
        }
        else if (s[2] == '0' || stoi(s.substr(2)) < 2) {
            flag = false;
        }
        cout << (flag ? "Yes" : "No") << endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/2000/A
