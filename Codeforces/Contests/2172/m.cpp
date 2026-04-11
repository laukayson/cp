#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;cin>>n>>m>>k;
	vector<vector<int>>adj(n+1);
	vector<int>a(n),d(n+1,INT_MAX);
	for(int &x:a)cin>>x;
	while(m--){
		int u,v;cin>>u>>v;
		adj[u].push_back(v),adj[v].push_back(u);
	}
	d[1]=0;
	queue<int>q;
	q.push(1);
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int t:adj[x]){
			if(d[t]==INT_MAX){
				d[t]=d[x]+1;
				q.push(t);
			}
		}
	}
	vector<int>ans(k+1);
	for(int i=1;i<=n;i++){
		ans[a[i-1]]=max(ans[a[i-1]],d[i]);
	}
	for(int i=1;i<=k;i++)cout<<ans[i]<<' ';
}
