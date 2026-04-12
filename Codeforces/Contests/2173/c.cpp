#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;cin>>n>>k;
	vector<int>a(n);
	for(int &x:a)cin>>x;
	set<int>st(a.begin(),a.end()),b;
	map<int,int>u;
	while(st.size()){
		int x=*st.begin();
		b.insert(x);
		u[x]=1;
		for(int j=2;j*x<=k;j++){
			auto it=st.find(j*x);
			if(it!=st.end()){
				u[*it]=1;
				st.erase(it);
			}else if(!u[j*x]){
				cout<<"-1\n";
				return;
			}
		}
		st.erase(x);
	}
	cout<<b.size()<<'\n';
	for(int x:b)cout<<x<<' ';
	cout<<'\n';
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
