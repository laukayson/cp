#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<ll>a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		ll f=0;
		for(int i=0;i<n;i++)f+=(i&1?-a[i]:+a[i]);
		ll maxf=f+(n&1?n-1:n-2);
		ll mini=INT_MAX,maxj=0;
		for(int i=0;i<n;i+=2)mini=min(mini,2*a[i]+i);
		for(int j=1;j<n;j+=2)maxj=max(maxj,2*a[j]+j);
		maxf=max(maxf,f+maxj-mini);
		mini=INT_MAX,maxj=0;
		for(int i=0;i<n;i+=2)mini=min(mini,2*a[i]-i);
		for(int j=1;j<n;j+=2)maxj=max(maxj,2*a[j]-j);
		maxf=max(maxf,f+maxj-mini);
		cout<<maxf<<'\n';
	}
}
