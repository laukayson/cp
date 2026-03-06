	#include <bits/stdc++.h>
	using namespace std;
	typedef long long ll;
	
	void solve(){
		int n,k;cin>>n>>k;
		vector<int>a(n),occ(n+1),m(n+1);
		for(int &x:a){
			cin>>x;
			occ[x]++;
		}
		for(int i=0;i<=n;i++){
			if(occ[i]%k){
				cout<<"0\n";
				return;
			}
		}
		int l=0;
		ll ans=0;
		for(int r=0;r<n;r++){
			m[a[r]]++;
			while(m[a[r]]>occ[a[r]]/k){
				m[a[l]]--;
				l++;
			}
			ans+=r-l+1;
		}
		cout<<ans<<'\n';
	}
	
	int main(){
		int t;cin>>t;
		while(t--)solve();
	}
