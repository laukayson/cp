#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		vector<int>a(n);
		set<int>s;
		for(int i=0;i<=n;i++)s.insert(i);
		for(int i=0;i<n;i++){
			cin>>a[i];
			s.erase(a[i]);
		}
		cout<<min(k-1,*s.begin())<<'\n';
	}
}
