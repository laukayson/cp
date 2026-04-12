#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector<string>names(n);
	vector<int>scores(n);
	map<string,vector<int>>m;
	for(int i=0;i<n;i++){
		cin>>names[i]>>scores[i];
		m[names[i]].assign(n+1,0);
	}
	for(int i=1;i<=n;i++)m[names[i-1]][i]=scores[i-1];
	for(auto &[k,v]:m){
		for(int i=1;i<=n;i++)v[i]+=v[i-1];
	}
	vector<pair<int,string>>final;
	for(auto [k,v]:m)final.push_back({v[n],k});
	sort(final.begin(),final.end(),greater<pair<int,string>>());
	vector<string>c;
	c.push_back(final[0].second);
	for(int i=0;i<m.size()-1;i++){
		if(final[i].first==final[i+1].first)c.push_back(final[i+1].second);
		else break;
	}
	if(c.size()==1)cout<<c[0];
	else{
		vector<int>d;
		for(string name:c){
			for(int i=1;i<=n;i++){
				if(m[name][i]>=final[0].first){
					d.push_back(i);
					break;
				}
			}
		}
		cout<<c[min_element(d.begin(),d.end())-d.begin()];
	}
}
