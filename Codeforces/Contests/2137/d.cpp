#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<int>a(n),b(n);
	map<int,vector<int>>m;
	for(int i=0;i<n;i++){
		cin>>b[i];
		m[b[i]].push_back(i);
	}
	int c=1;
	for(auto [sz,idx]:m){
		if(idx.size()%sz!=0){
			cout<<"-1\n";
			return;
		}
		for(int i=0;i<idx.size();i++){
			a[idx[i]]=c;
			if((i+1)%sz==0)c++;
		}
	}
	for(int i=0;i<n;i++)cout<<a[i]<<(i==n-1?'\n':' ');
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
