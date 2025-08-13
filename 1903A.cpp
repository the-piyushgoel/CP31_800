#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--){
	   int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ch=0;
        for(int i=0;i+1<n;i++){
            if(v[i]>v[i+1]){
                ch=1;
                break;
            }
        }
            if(k==1 && ch!=0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
	}
}