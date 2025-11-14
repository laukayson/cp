#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll>a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a.rbegin(),a.rend());
		if(n==1)cout<<a[0]%MOD<<'\n';
		else{
			ll m=(2*a[0]%MOD+a[1]%MOD)%MOD;
			for(int i=2;i<n;i++)m=(2*m%MOD+a[i]%MOD)%MOD;
			cout<<m<<'\n';
		}
	}
}
