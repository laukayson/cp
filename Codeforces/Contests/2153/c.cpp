#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>a(n);
		map<int,int>m;
		for(int &x:a){
			cin>>x;
			m[x]++;
		}
		int sides=0;
		vector<int>s;
		ll peri=0;
		for(const auto pi:m){
			if(pi.second&1)s.push_back(pi.first);
			if(pi.second>1){
				sides+=pi.second;
				peri+=(ll)(pi.second-(pi.second&1))*pi.first;
			}
		}
		int lo=0,sh=0,maxrem=0;
		if(s.size()>1){
			for(int i=0;i<s.size()-1;i++){
				if(peri+s[i]>s[i+1]){
					if(s[i]+s[i+1]>maxrem){
						maxrem=s[i]+s[i+1];
						sh=s[i],lo=s[i+1];
					}
				}
			}
		}
		for(int i=0;i<s.size();i++){
			if(peri>s[i]){
				if(s[i]>maxrem){
					maxrem=s[i];
					sh=0,lo=s[i];
				}
			}
		}
		if(lo)sides++;
		if(sh)sides++;
		if(sides>2)cout<<peri+maxrem<<'\n';
		else cout<<"0\n";
	}
}
