#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("cownomics.in","r",stdin);
	freopen("cownomics.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<string>spotty(n),plain(n);
	for(int i=0;i<n;i++)cin>>spotty[i];
	for(int i=0;i<n;i++)cin>>plain[i];
	int cnt=0;
	for(int j=0;j<m;j++){
		set<char>atcg;
		for(int i=0;i<n;i++)atcg.insert(spotty[i][j]);
		for(int i=0;i<n;i++){
			bool spottiness=1;
			for(char pos:atcg){
				if(plain[i][j]==pos){
					spottiness=0;
					break;
				}
			}
			if(!spottiness)break;
			else if(i==n-1)cnt++;
		}
	}
	cout<<cnt<<'\n';
}
