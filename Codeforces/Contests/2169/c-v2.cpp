#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>a(n),b(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=2*(i+1)-a[i];
		}
		ll mx=0,cur=0;
		for(int i=0;i<n;i++){
			cur=max(0LL,cur+b[i]);
			mx=max(mx,cur);
		}
		cout<<accumulate(a.begin(),a.end(),0LL)+mx<<'\n';
	}
}
