#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("cownomics.in","r",stdin);
	freopen("cownomics.out","w",stdout);
	int n,m,cnt=0;
	cin>>n>>m;
	vector<string>s(n),p(n);
	for(int i=0;i<n;i++)cin>>s[i];
	for(int i=0;i<n;i++)cin>>p[i];
	for(int i=0;i<m-2;i++){
		for(int j=i+1;j<m-1;j++){
			for(int k=j+1;k<m;k++){
				unordered_set<string>spottysubs;
				bool spotty=1;
				for(int l=0;l<n;l++){
					string subs={s[l][i],s[l][j],s[l][k]};
					spottysubs.insert(subs);
				}
				for(int l=0;l<n;l++){
					string subs={p[l][i],p[l][j],p[l][k]};
					if(spottysubs.find(subs)!=spottysubs.end()){
						spotty=0;
						break;
					}
				}
				if(spotty)cnt++;
			}
		}
	}
	cout<<cnt<<'\n';
}
