#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("guess.in","r",stdin);
	freopen("guess.out","w",stdout);
	int n,maxcnt=0;
	cin>>n;
	set<string>feasible_set;
	vector<string>characteristics[n];
	for(int i=0;i<n;i++){
		string animal;
		int k;
		cin>>animal>>k;
		for(int j=0;j<k;j++){
			string characteristic;
			cin>>characteristic;
			feasible_set.insert(characteristic);
			characteristics[i].push_back(characteristic);
		}
	}
	vector<string>feasible;
	for(string characteristic:feasible_set)feasible.push_back(characteristic);
	vector<vector<bool>>animals(n,vector<bool>(feasible.size(),0));
	for(int i=0;i<n;i++){
		for(string characteristic:characteristics[i]){
			for(int j=0;j<feasible.size();j++){
				if(characteristic==feasible[j])animals[i][j]=1;
			}
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int cnt=1;
			for(int k=0;k<feasible.size();k++){
				if(animals[i][k]&animals[j][k])cnt++;
			}
			maxcnt=max(maxcnt,cnt);
		}
	}
	cout<<maxcnt<<'\n';
}
