#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>a(n);
		vector<ll>s(n+1);
		for(int &x:a)cin>>x;
		for(int i=0;i<n;i++)s[i+1]=a[i]+s[i];
		ll mn=LLONG_MAX,d=0;
		for(ll i=1;i<=n;i++){
			mn=min(mn,(i-1)*(i-1)+i-1-s[i-1]);
			d=max(d,i*i+i-s[i]-mn);
		}
		cout<<accumulate(a.begin(),a.end(),0LL)+d<<'\n';
	}
}
