#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		priority_queue<int,vector<int>,greater<int>>a;
		vector<int>b(m),c(m);
		for(int i=0;i<n;i++){
			int ai;cin>>ai;
			a.push(ai);
		}
		for(int &x:b)cin>>x;
		for(int &x:c)cin>>x;
		vector<pair<int,int>>v,w;
		for(int i=0;i<m;i++){
			if(c[i]==0)w.push_back({b[i],c[i]});
			else v.push_back({b[i],c[i]});
		}
		sort(v.begin(),v.end());
		sort(w.begin(),w.end());
		int ans=0,i=0;
		vector<int>a2;
		while(!a.empty()&&i<v.size()){
			int x=a.top();
			if(x>=v[i].first){
				ans++;
				a.pop();
				a.push(max(x,v[i].second));
				i++;
			}else{
				a2.push_back(x);
				a.pop();
			}
		}
		i=0;
		while(!a.empty()){
			a2.push_back(a.top());
			a.pop();
		}
		sort(a2.begin(),a2.end());
		int j=0;
		while(j<a2.size()&&i<w.size()){
			int x=a2[j];
			if(x>=w[i].first){
				ans++;
				i++;
			}
			j++;
		}
		cout<<ans<<'\n';
	}
}
