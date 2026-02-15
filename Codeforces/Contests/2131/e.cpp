#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<int>a(n+1),b(n+1);
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	for(int i=0;i<n;i++){
		if((a[i]!=b[i])&&((a[i]^a[i+1])!=b[i])&&((a[i]^b[i+1])!=b[i])){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
