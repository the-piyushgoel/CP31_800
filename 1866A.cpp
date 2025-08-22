#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 100000;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        res = min(abs(x), res);
    }
    cout << res;
}