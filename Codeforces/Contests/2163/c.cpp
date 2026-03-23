#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<vector<int>>a(2,vector<int>(n));
		for(auto &i:a){
			for(int &j:i)cin>>j;
		}
		vector<vector<pair<int,int>>>pos(2*n+1);
		for(int i=0;i<2;i++){
			for(int j=0;j<n;j++)pos[a[i][j]].push_back(make_pair(i,j));
		}
		array<set<int>,2>st;
		st[0].insert(INT_MAX);
		st[1].insert(INT_MIN);
		for(int i=0;i<n;i++)st[0].insert(i);
		for(int i=0;i<n;i++)st[1].insert(i);
		auto add=[&](int x){
			for(auto [i,j]:pos[x])st[i].erase(j);
		};
		auto del=[&](int x){
			for(auto [i,j]:pos[x])st[i].insert(j);
		};
		auto check=[&](){
			if(st[0].count(0)||st[1].count(n-1)||*st[0].begin()-1<=*st[1].rbegin())return 0;
			return 1;
		};
		ll ans=0;
		int r=0;
		for(int l=1;l<=2*n;l++){
			while(r+1<=2*n&&!check())add(++r);
			if(!check())break;
			ans+=2*n-r+1;
			del(l);
		}
		cout<<ans<<'\n';
	}
}
