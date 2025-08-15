#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ct = 0, ct1 = 0;
        cin >> n;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            if (ch == '#' && ct < 3)
            {
                ct = 0;
            }
            else if (ch == '.')
            {
                ct++;
                ct1++;
            }
        }
        if (ct >= 3)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << ct1 << endl;
        }
    }
}