#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++)cin>>a[i]>>b[i];
	vector<int>c(n,1),idx;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j&&a[j]<=a[i]&&b[i]<=b[j])c[i]=0;
		}
		if(c[i])idx.push_back(i+1);
	}
	cout<<idx.size()<<'\n';
	for(int i=0;i<idx.size();i++)cout<<idx[i]<<' ';
	cout<<'\n';
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
