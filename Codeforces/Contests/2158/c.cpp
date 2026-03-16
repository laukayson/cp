#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		vector<ll>a(n),b(n),pre(n),suf(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i==0)pre[0]=a[0];
			else pre[i]=max(pre[i-1]+a[i],a[i]);
		}
		for(int i=n-1;i>=0;i--){
			if(i==n-1)suf[n-1]=a[n-1];
			else suf[i]=max(a[i],suf[i+1]+a[i]);
		}
		for(ll &x:b)cin>>x;
		ll ans=-LLONG_MAX;
		for(int i=0;i<n;i++)ans=max(ans,pre[i]);
		if(k&1){
			for(int i=0;i<n;i++){
				ll l=(i>0)?max(0LL,pre[i-1]):0LL,r=(i<n-1)?max(0LL,suf[i+1]):0LL;
				ans=max(ans,l+a[i]+b[i]+r);
			}
		}
		cout<<ans<<'\n';
	}
}
