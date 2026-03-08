#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,q;cin>>n>>q;
		vector<int>a(n+1),zeros(n+1),ones(n+1),d(n+1);
		for(int i=1;i<=n;i++){
			cin>>a[i];
			a[i]?ones[i]++:zeros[i]++;
			ones[i]+=ones[i-1];
			zeros[i]+=zeros[i-1];
			d[i]=d[i-1]+(a[i]!=a[i-1]);
		}
		while(q--){
			int l,r;cin>>l>>r;
			if((zeros[r]-zeros[l-1])%3||(ones[r]-ones[l-1])%3){
				cout<<"-1\n";
				continue;
			}
			int c=(r-l+1)/3;
			if(d[r]-d[l]==r-l)c++;
			cout<<c<<'\n';
		}
	}
}
