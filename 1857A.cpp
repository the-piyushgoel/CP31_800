#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int sum = 0;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            sum += x;
        }
        if (sum % 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}