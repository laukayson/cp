#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("gymnastics.in","r",stdin);
	freopen("gymnastics.out","w",stdout);
	int k,n,cnt=0;
	cin>>k>>n;
	if(k==1){
		cout<<n*(n-1)/2<<'\n';
		return 0;
	}
	vector<vector<int>>rankings(k,vector<int>(n));
	for(int i=0;i<k;i++){
		int id;
		for(int j=0;j<n;j++){
			cin>>id;
			rankings[i][id-1]=j;
		}
	}
	vector<vector<bool>>consistent(n,vector<bool>(n,1));
	for(int ses=0;ses<k-1;ses++){
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if((rankings[ses][i]<rankings[ses][j])!=(rankings[ses+1][i]<rankings[ses+1][j])){
					consistent[i][j]=0;
					consistent[j][i]=0;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)if(consistent[i][j])cnt++;
	}
	cout<<(cnt-n)/2<<'\n';
}
