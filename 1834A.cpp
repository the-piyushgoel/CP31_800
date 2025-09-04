#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        int cnt = 0, cnt1 = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                cnt1++;
            else
                cnt++;
        }
        int res = 0;
        while (cnt1 < cnt || cnt % 2 != 0)
        {
            res++;
            cnt--;
            cnt1++;
        }
        cout << res << endl;
    }
}
