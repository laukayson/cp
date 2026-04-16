#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		ll X=-2e14;
		vector<int>a(n);
		vector<ll>pre(n+2),suf(n+2);
		for(int &x:a)cin>>x;
		pre[1]=a[0];
		for(int i=2;i<=n;i++)pre[i]=pre[i-1]+abs(a[i-1]);
		for(int i=n;i>=1;i--)suf[i]=suf[i+1]+a[i-1];
		for(int i=1;i<=n;i++)X=max(X,pre[i-1]-suf[i+1]);
		cout<<X<<'\n';
	}
}
