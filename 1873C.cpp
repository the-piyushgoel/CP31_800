#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector<vector<char>> v;
        for (int i = 0; i < 10; i++)
        {
            vector<char> t;
            for (int j = 0; j < 10; j++)
            {
                char c;
                cin >> c;
                t.push_back(c);
            }
            v.push_back(t);
        }
        int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (v[i][j] == 'X')
                {
                    if (i == 0 || i == 9 || j == 0 || j == 9)
                        p1++;
                    else if (i == 1 || i == 8 || j == 1 || j == 8)
                        p2++;
                    else if (i == 2 || i == 7 || j == 2 || j == 7)
                        p3++;
                    else if (i == 3 || i == 6 || j == 3 || j == 6)
                        p4++;
                    else
                        p5++;
                }
            }
        }
        int ans = p1 * 1 + p2 * 2 + p3 * 3 + p4 * 4 + p5 * 5;
        cout << ans << endl;
    }
}