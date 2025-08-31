#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        if (x % k)
            cout << 1 << endl
                 << x << endl;
        else
        {
            int i = 0, j = x;
            while (i <= j)
            {
                if (i % k == 0 || j % k == 0)
                {
                    i++;
                    j--;
                }
                else
                    break;
            }
            cout << 2 << endl
                 << j << " " << i << endl;
        }
    }
}