#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;cin>>n>>k;
	vector<vector<char>>g(n,vector<char>(n));
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(cnt<k){
				g[i][j]='U';
				cnt++;
			}else{
				if(j!=(n-1))g[i][j]='R';
				else if(g[i][j-1]!='U')g[i][j]='L';
				else if(i!=(n-1))g[i][j]='D';
				else if(g[i-1][j]!='U')g[i][j]='U';
				else{
					cout<<"NO\n";
					return;
				}
			}
		}
	}
	cout<<"YES\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)cout<<g[i][j];
		cout<<'\n';
	}
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
