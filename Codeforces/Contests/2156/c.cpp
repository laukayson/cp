#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		vector<int>a(n),m(n+1),p(n+1);
		for(int&x:a){
			cin>>x;
			m[x]++;
		}
		for(int i=1;i<=n;i++)p[i]=p[i-1]+m[i];
		int ans=1;
		for(int g=1;g<=n;g++){
			int good=n-p[min(n,g*4-1)];
			if(g<=n)good+=m[g];
			if(g*2<=n)good+=m[g*2];
			if(g*3<=n)good+=m[g*3];
			if(good>=n-k)ans=g;
		}
		cout<<ans<<'\n';
	}
}
