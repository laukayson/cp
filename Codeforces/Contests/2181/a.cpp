#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n,m;cin>>n>>m;
	vector<vector<ll>>x(n,vector<ll>(26));
	vector<ll>y(26),z(26);
	for(int i=0;i<n;i++){
		string s;cin>>s;
		for(char c:s){
			x[i][c-65]++;
			y[c-65]++;
			z[c-65]+=m;
		}
	}
	for(int i=0;i<n;i++){
		bool pos=1;
		for(int j=0;j<26;j++){
			if(z[j]<x[i][j]*(m+1)){
				cout<<"-1 ";
				pos=0;
				for(int k=0;k<j;k++){
					z[k]+=x[i][k]*(m+1);
					y[k]+=x[i][k];
				}
				break;
			}
			z[j]-=x[i][j]*(m+1);
			y[j]-=x[i][j];
		}
		if(pos){
			ll ans=m;
			for(int j=0;j<26;j++){
				if(y[j])ans=min(ans,z[j]/y[j]);
			}
			cout<<ans<<' ';
			for(int j=0;j<26;j++){
				z[j]+=x[i][j]*(m+1);
				y[j]+=x[i][j];
			}
		}
	}
}
