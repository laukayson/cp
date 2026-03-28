#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>a(n);
		for(int &x:a)cin>>x;
		long long ans=-*max_element(a.begin(),a.end());
		for(int i=0;i<n;i++)ans+=max(a[i],a[(i+1)%n]);
		cout<<ans<<'\n';
	}
}
