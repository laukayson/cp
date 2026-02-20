#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int>mexification(vector<int>v){
	int n=v.size(),mex=0;
	vector<int>occ(n+1);
	for(int ai:v)occ[ai]++;
	while(occ[mex])mex++;
	vector<int>b;
	for(int ai:v){
		if(ai<mex&&occ[ai]==1)b.push_back(ai);
		else b.push_back(mex);
	}
	return b;
}

void solve(){
	int n,k;cin>>n>>k;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	a=mexification(a);
	k--;
	if(k>0){
		vector<int>b=mexification(a);
		k--;
		if(k&1)a=mexification(b);
		else a=b;
	}
	cout<<accumulate(a.begin(),a.end(),0LL)<<'\n';
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
