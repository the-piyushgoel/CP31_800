#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, t = 1;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 1; i + 1 < n; i++)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                i = 0;
            }
            else if (v[i] < v[i - 1])
            {
                cout << "No" << endl;
                t = 0;
                break;
            }
        }
        if (t)
            cout << "Yes" << endl;
    }
}