#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>a(n),b(n);
		for(int &x:a)cin>>x;
		for(int &x:b)cin>>x;
		ll mx=0,mn=0;
		for(int i=0;i<n;i++){
			ll mmx=max(mx-a[i],b[i]-mn),mmn=min(mn-a[i],b[i]-mx);
			mx=mmx,mn=mmn;
		}
		cout<<mx<<'\n';
	}
}
