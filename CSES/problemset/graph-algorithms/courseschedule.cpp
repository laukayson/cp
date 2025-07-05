#include <bits/stdc++.h>
using namespace std;
const int MAXN=1e5+5;
vector<int>adj[MAXN];
int in[MAXN];

int main(){
	int n,m;
	cin>>n>>m;
	vector<int>ord;
	queue<int>q;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		in[b]++;
	}
	for(int i=1;i<=n;i++){
		if(in[i]==0)q.push(i);
	}
	while(!q.empty()){
		int a=q.front();
		q.pop();
		ord.push_back(a);
		for(int b:adj[a]){
			in[b]--;
			if(in[b]==0)q.push(b);
		}
	}
	if(ord.size()!=n)cout<<"IMPOSSIBLE";
	else for(int i=0;i<n;i++)cout<<ord[i]<<' ';
}
