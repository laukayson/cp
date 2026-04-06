#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int x;
	ll y,k;cin>>x>>y>>k;
	ll l=1,r=1e12+1;
	while(l<=r){
		ll m=(l+r)/2,p=m;
		for(int i=0;i<x;i++)p-=p/y;
		if(p>=k)r=m-1;
		else l=m+1;
	}
	if(l>1e12)cout<<"-1\n";
	else cout<<l<<'\n';
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}	
