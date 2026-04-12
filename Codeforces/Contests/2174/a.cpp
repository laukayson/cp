#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s,t;cin>>s>>t;
	map<char,int>ms,mt;
	for(int i=0;i<s.size();i++)ms[s[i]]++;
	for(int i=0;i<t.size();i++)mt[t[i]]++;
	int j=0;
	string ans="";
	for(auto [c,v]:ms){
		if(v>mt[c]){
			cout<<"Impossible\n";
			return;
		}
		mt[c]-=v;
		if(mt[c]==0)mt.erase(c);
	}
	for(auto [c,v]:mt){
		while(j<s.size()&&c>=s[j])ans+=s[j++];
		for(int i=0;i<v;i++)ans+=c;
	}
	if(j<s.size())ans+=s.substr(j,s.size()-j);
	cout<<ans<<'\n';
}

int main(){
	int T;cin>>T;
	while(T--)solve();
}
