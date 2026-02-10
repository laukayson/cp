#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<int>b(n);
	for(int i=0;i<n;i++)cin>>b[i];
	int cur=b[0];
	for(int i=1;i<n;i++){
		cur=min(cur,b[i]);
		if(b[i]>=cur*2){
			cout<<"NO"<<'\n';
			return;
		}
	}
	cout<<"YES"<<'\n';
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
