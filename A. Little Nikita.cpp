#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m;
    cin >> t;
    vector<int> v(t, 0);
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        if (n >= m && (n-m)%2==0)
        {
            v[i] = 1;
        }
    }
    for (int i : v)
    {
        if (i == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
