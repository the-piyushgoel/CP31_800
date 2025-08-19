#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int cnt = 0;
        int temp = 10;
        bool fnd = false;
        while (temp--)
        {
            if (x.find(s) != string::npos)
            {
                fnd = true;
                break;
            }
            x += x;
            cnt++;
        }
        if (fnd == true)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}