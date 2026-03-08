#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,rk,ck,rd,cd,ans=0;cin>>n>>rk>>ck>>rd>>cd;
		if(rk<rd)ans=max(ans,rd);
		else if(rk>rd)ans=max(ans,n-rd);
		if(ck<cd)ans=max(ans,cd);
		else if(ck>cd)ans=max(ans,n-cd);
		cout<<ans<<'\n';
	}
}
