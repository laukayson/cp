#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		ll k;cin>>n>>k;
		vector<ll>a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		if(k&1)for(int i=0;i<n;i++)cout<<a[i]+(a[i]&1)*k<<' ';
		else for(int i=0;i<n;i++)cout<<(k-(k+1-a[i]%(k+1))+1)*k+a[i]<<' ';
		cout<<'\n';
	}
}
