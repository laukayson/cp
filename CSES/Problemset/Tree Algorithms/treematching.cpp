#include <bits/stdc++.h>
using namespace std;
#define pb push_back
const int MAXN=2e5+5;
vector<int>adj[MAXN];
vector<vector<int>>dp(MAXN,vector<int>(2));

void dfs(int v,int u){
	for(int x:adj[v]){
		if(x==u)continue;
		dfs(x,v);
		dp[v][0]+=max(dp[x][0],dp[x][1]);
	}
	for(int x:adj[v]){
		if(x==u)continue;
		dp[v][1]=max(dp[v][1],1+dp[x][0]+dp[v][0]-max(dp[x][0],dp[x][1]));
	}
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	dfs(1,-1);
	cout<<max(dp[1][0],dp[1][1])<<'\n';
}
