#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n,h,k,q;cin>>n>>h;
	vector<pair<int,int>>a(n);
	for(auto &p:a)cin>>p.second;
	cin>>k;
	for(int i=0;i<k;i++){
		int s;cin>>s;
		s--;
		a[s].first=-1;
	}
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	for(int i=0;i<h-1;i++)pq.push(a[i]);
	vector<ll>c;
	ll clen=0;
	for(int i=0;i<=n-h;i++){
		pq.push(a[i+h-1]);
		clen+=pq.top().second;
		if(pq.top().first==-1)c.push_back(clen);
		pq.pop();
	}
	cin>>q;
	while(q--){
		ll t;cin>>t;
		ll ans=t/clen*c.size();
		ans+=upper_bound(c.begin(),c.end(),t%clen)-c.begin();
		cout<<ans<<'\n';
	}
}
