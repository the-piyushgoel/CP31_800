#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int x = v[0];
        vector<int> a, b;
        a.push_back(x);
        for (int i = 1; i < n; i++)
        {
            if (x % v[i] == 0)
                a.push_back(v[i]);
            else
                b.push_back(v[i]);
        }
        if (b.size() == 0)
            cout << -1 << endl;
        else
        {
            cout << a.size() << " ";
            cout << b.size() << endl;
            for (int i = 0; i < a.size(); i++)
                cout << a[i] << " ";
            cout << endl;
            for (int i = 0; i < b.size(); i++)
                cout << b[i] << " ";
            cout << endl;
        }
    }
}