#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll n,m,a,b;
	cin>>n>>m>>a>>b;
	if((a>max(n,m))||(b>max(n,m))){
		cout<<"NO"<<'\n';
		return;
	}
	if((a==m&&b<=n)||(a<=m&&b==n)||(a==n&&b<=m)||(a<=n&&b==m))cout<<"YES"<<'\n';
	else cout<<"NO"<<'\n';
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
