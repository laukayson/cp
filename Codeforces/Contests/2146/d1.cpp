#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int l,r;cin>>l>>r;
		int n=r-l+1,pw=1;
		ll ans=0;
		vector<int>a(n);
		set<int>s;
		while(pw<r)pw=pw<<1|1;
		for(int i=l;i<=r;i++)s.insert(i);
		for(int i=r;i>=l;i--){
			while(s.find(pw-i)==s.end())pw>>=1;
			a[i]=pw-i;
			ans+=i|a[i];
			s.erase(pw-i);
		}
		cout<<ans<<'\n';
		for(int i=0;i<n;i++)cout<<a[i]<<(i==n-1?'\n':' ');
	}
}
