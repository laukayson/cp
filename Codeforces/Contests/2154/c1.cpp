#include <bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
vector<vector<int>>p(MAXN+1);

int main(){
	int t;cin>>t;
	for(int i=2;i<=MAXN;i++){
		if(!p[i].empty())continue;
		for(int j=i;j<=MAXN;j+=i)p[j].push_back(i);
	}
	while(t--){
		int n;cin>>n;
		vector<int>a(n),b(n),cnt(MAXN+1);
		for(int &x:a)cin>>x;
		for(int &x:b)cin>>x;
		int ans=2;
		for(int i=0;i<n;i++){
			for(int x:p[a[i]]){
				if(cnt[x]>0)ans=0;
				cnt[x]++;
			}
		}
		for(int i=0;i<n;i++){
			for(int x:p[a[i]])cnt[x]--;
			for(int x:p[a[i]+1]){
				if(cnt[x]>0)ans=min(ans,1);
			}
			for(int x:p[a[i]])cnt[x]++;
		}
		cout<<ans<<'\n';
	}
}
