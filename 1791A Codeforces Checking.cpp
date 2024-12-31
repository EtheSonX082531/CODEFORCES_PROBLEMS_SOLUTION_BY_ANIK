#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s = "codeforces", str;
    vector<int> v(t, 0);
    for (int i = 0; i < t; i++) {
        cin >> str;
        if (s.find(str) != string::npos) {
            v[i] = 1; 
        }
    }
    for (int i : v) {
        if (i == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}    
