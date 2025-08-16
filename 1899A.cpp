#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int flag = 1;
    int k = 0;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 3 == 0)
        {
            cout << "Second" << endl;
        }
        else if (k == 10 && flag == 1)
        {
            cout << "First";
        }
        else
        {
            cout << "First" << endl;
            flag = 0;
        }
        k++;
    }
    return 0;
}