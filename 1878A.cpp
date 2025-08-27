#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin>>t;
	while(t--){
	    int n,a;
	    cin>>n>>a;
	    vector<int>v(n);
	    int flag=0;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        if(v[i]==a){
	            flag=1;
	        }
	    }
	    if(flag==1){
	        cout<<"YES"<<"\n";
	    }
	    else{
	        cout<<"NO"<<"\n";
	    }
	}
}
