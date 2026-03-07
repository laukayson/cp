#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		vector<int>a,b;
		for(int i=0;i<n;i++)s[i]=='a'?a.push_back(i-a.size()):b.push_back(i-b.size());
		ll opa=0,opb=0;
		if(!a.empty()){
			int ma=a[a.size()/2];
			for(int i=0;i<a.size();i++)opa+=abs(a[i]-ma);
		}
		if(!b.empty()){
			int mb=b[b.size()/2];
			for(int i=0;i<b.size();i++)opb+=abs(b[i]-mb);
		}
		cout<<min(opa,opb)<<'\n';
	}
}
