#include <bits/stdc++.h>
using namespace std;
const int MOD=998244353;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>a(n),b(n);
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)cin>>b[i];
		for(int i=0;i<n;i++){
			if(a[i]>b[i])swap(a[i],b[i]);
		}
		int k=0,ans=1;
		for(int i=0;i<n-1;i++)k+=(b[i]>a[i+1]?1:0);
		for(int i=0;i<n-k;i++)ans=ans*2%MOD;
		cout<<ans<<'\n';
	}
}
