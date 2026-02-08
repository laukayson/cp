#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n;cin>>n;
	vector<ll>p(n),s(n),a(n);
	for(int i=0;i<n;i++)cin>>p[i];
	for(int i=0;i<n;i++)cin>>s[i];
	if(!is_sorted(p.begin(),p.end(),greater<int>())||!is_sorted(s.begin(),s.end())||p[n-1]!=s[0]){
		cout<<"No\n";
		return;
	}
	for(int i=0;i<n;i++)a[i]=lcm(p[i],s[i]);
	for(int i=1;i<n;i++){
		if(gcd(p[i-1],a[i])!=p[i]){
			cout<<"No\n";
			return;
		}
	}
	for(int i=n-2;i>=0;i--){
		if(gcd(s[i+1],a[i])!=s[i]){
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
