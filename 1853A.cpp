#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int diff = 1000000000;
        for (int i = 1; i < n; i++) {
            int x = v[i] - v[i - 1];
            diff = min(x,diff);
        }
        int res;
        if(diff<0) res=0;
        else res=diff/2+1;
        cout<<res<<endl;
        
    }
 
}