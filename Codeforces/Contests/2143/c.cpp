#include <bits/stdc++.h>
using namespace std;

struct Edge{
	int u,v,x,y;
};

void dfs(int v,vector<bool>&visited,const vector<vector<int>>&adj,vector<int>&ans){
	visited[v]=1;
	for(int u:adj[v]){
		if(!visited[u])dfs(u,visited,adj,ans);
	}
	ans.push_back(v);
}

void topological_sort(vector<bool>&visited,vector<int>&ans,int n,const vector<vector<int>>&adj){
	visited.assign(n,0);
	ans.clear();
	for(int i=0;i<n;i++){
		if(!visited[i])dfs(i,visited,adj,ans);
	}
	reverse(ans.begin(),ans.end());
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<Edge>e(n-1);
		vector<vector<int>>g(n);
		vector<int>ord,p(n);
		vector<bool>visited(n);
		for(auto &[u,v,x,y]:e){
			cin>>u>>v>>x>>y;
			u--,v--;
			if(x>y)g[u].push_back(v);
			else g[v].push_back(u);
		}
		topological_sort(visited,ord,n,g);
		for(int i=0;i<n;i++)p[ord[i]]=n-i;
		for(int i=0;i<n;i++)cout<<p[i]<<(i==n-1?'\n':' ');
	}
}
