#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,k;cin>>n>>k;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	ll val=0;
	for(int i=0;i<n;i++)val+=abs(a[i]-b[i]);
	vector<pair<int,int>>c;
	for(int i=0;i<n;i++)c.push_back(make_pair(min(a[i],b[i]),max(a[i],b[i])));
	sort(c.begin(),c.end());
	for(int i=0;i<n-1;i++){
		if(c[i+1].first<=c[i].second){
			cout<<val<<'\n';
			return;
		}
	}
	int mind=1e9;
	for(int i=0;i<n-1;i++)mind=min(mind,c[i+1].first-c[i].second);
	cout<<val+2*mind<<'\n';
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
