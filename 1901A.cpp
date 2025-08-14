#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v[i] = a;
        }
        int res = v[0] - 0;
        for (int i = 1; i < n; i++)
        {
            int temp = v[i] - v[i - 1];
            res = max(res, temp);
        }
        int flag = 2 * (x - v[n - 1]);
        res = max(res, flag);
        cout << res << endl;
    }
}