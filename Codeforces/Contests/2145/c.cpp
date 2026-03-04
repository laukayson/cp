#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		vector<int>v(n),p(n),m(n*2+1,-2);
		for(int i=0;i<n;i++)v[i]=(s[i]=='a'?1:-1);
		int sum=accumulate(v.begin(),v.end(),0);
		if(sum==0){
			cout<<"0\n";
			continue;
		}
		m[n]=-1;
		int ans=n,pre=0;
		for(int r=0;r<n;r++){
			pre+=v[r];
			int d=pre-sum;
			if(m[d+n]!=-2)ans=min(ans,r-m[d+n]);
			m[pre+n]=r;
		}
		cout<<(ans==n?-1:ans)<<'\n';
	}
}
