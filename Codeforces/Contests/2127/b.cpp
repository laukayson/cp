#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,x;
	string s;
	cin>>n>>x>>s;
	int l=-1e9,r=1e9;
	if(x==1||x==n){
		cout<<1<<'\n';
		return;
	}
	for(int i=x-2;i>=0;i--){
		if(s[i]=='#'){
			l=i+1;
			break;
		}
	}
	for(int i=x;i<n;i++){
		if(s[i]=='#'){
			r=i+1;
			break;
		}
	}
	if((l==-1e9&&r==1e9)){
		cout<<1<<'\n';
		return;
	}
	cout<<max(min(x,n-r+2),min(l+1,n-x+1))<<'\n';
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
