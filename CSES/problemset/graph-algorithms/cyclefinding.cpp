#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=2505,INF=1e9+5;
vector<array<ll,2>>adj[MAXN];
vector<ll>d(MAXN,INF),par(MAXN);

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		ll a,b,c;
		cin>>a>>b>>c;
		adj[a].push_back({b,c});
	}
	d[1]=0;
	par[1]=0;
	for(int i=1;i<n;i++){
		for(int a=1;a<=n;a++){
			for(auto &[b,c]:adj[a]){
				if(d[a]+c<d[b]){
					d[b]=d[a]+c;
					par[b]=a;
				}
			}
		}
	}
	int s=-1;
	for(int a=1;a<=n;a++){
		for(auto &[b,c]:adj[a]){
			if(d[a]+c<d[b]){
				par[b]=a;
				s=b;
				break;
			}
		}
	}
	if(s==-1)cout<<"NO"<<'\n';
	else{
		cout<<"YES"<<'\n';
		for(int i=0;i<n;i++)s=par[s];
		vector<int>cycle;
		int cur=s;
		while(par[cur]!=s){
			cycle.push_back(cur);
			cur=par[cur];
		}
		cycle.push_back(s);
		reverse(cycle.begin(),cycle.end());
		for(int v:cycle)cout<<v<<' ';
	}
}
