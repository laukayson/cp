#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		ll k;cin>>n>>k;
		vector<ll>q(n),r(n);
		for(ll &x:q)cin>>x;
		for(ll &x:r)cin>>x;
		sort(q.begin(),q.end());
		sort(r.begin(),r.end());
		int cnt=0;
		map<int,int>m;
		for(int i=0;i<n;i++){
			int y=upper_bound(r.begin(),r.end(),(k-q[i])/(q[i]+1))-r.begin();
			if(y)m[y]++;
		}
		int curr=0;
		for(const auto [k,v]:m){
			cnt+=min(k-curr,v);
			curr=min(k,curr+v);
		}
		cout<<cnt<<'\n';
	}
}
