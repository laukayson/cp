#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	vector<int>h(n);
	for(int i=0;i<n;i++)cin>>h[i];
	int w=1,s=h[k-1];
	sort(h.begin(),h.end());
	for(int i=0;i<n-1;i++){
		if(h[i]<s)continue;
		if(h[i+1]>2*h[i]-w+1){
			cout<<"NO\n";
			return;
		}
		w+=h[i+1]-h[i];
	}
	cout<<"YES\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
