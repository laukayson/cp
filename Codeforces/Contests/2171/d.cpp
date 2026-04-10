#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<int>p(n),pre(n,2e5+1),suf(n+1);
	for(int i=0;i<n;i++){
		cin>>p[i];
		if(i==0)pre[i]=p[i];
		else pre[i]=min(pre[i-1],p[i]);
	}
	suf[n-1]=p[n-1];
	for(int i=n-2;i>=0;i--)suf[i]=max(suf[i+1],p[i]);
	for(int i=1;i<n;i++){
		if(pre[i-1]>suf[i]){
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
