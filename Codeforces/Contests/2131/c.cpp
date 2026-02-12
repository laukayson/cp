#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;cin>>n>>k;
	vector<int>s,t;
	for(int i=0;i<n;i++){
		int e;cin>>e;
		s.push_back(e%k);
		s.push_back(k-e%k);
	}
	for(int i=0;i<n;i++){
		int e;cin>>e;
		t.push_back(e%k);
		t.push_back(k-e%k);
	}
	sort(s.begin(),s.end());
	sort(t.begin(),t.end());
	if(s==t)cout<<"YES\n";
	else cout<<"NO\n";
}

int main(){
	int tc;cin>>tc;
	while(tc--)solve();
}
