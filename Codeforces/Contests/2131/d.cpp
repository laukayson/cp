#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<vector<int>>adj(n+1);
	vector<int>d(n+1);
	for(int i=0;i<n-1;i++){
		int u,v;cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		d[u]++;
		d[v]++;
	}
	if(n<=3){
		cout<<"0\n";
		return;
	}
	int l=0;
	for(int i=1;i<=n;i++)if(d[i]==1)l++;
	int s=0;
	for(int u=1;u<=n;u++){
		int temp=0;
		for(int v:adj[u])if(d[v]==1)temp++;
		s=max(s,temp);
	}
	cout<<l-s<<'\n';
}

int main(){
	int tc;cin>>tc;
	while(tc--)solve();
}
