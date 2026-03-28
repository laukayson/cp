#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;cin>>s;
	int sz=s.size();
	for(int i=1;i<sz;i++){
		char prev=s[i-1],curr=s[i];
		if((prev=='>'&&(curr=='<'||curr=='*'))||(prev=='*'&&(curr=='<'||curr=='*'))){
			cout<<"-1\n";
			return;
		}
	}
	int ans=0,cnt=1;
	while(cnt<=sz-1&&(s[cnt-1]==s[cnt]||s[cnt]=='*'))cnt++;
	ans=max(ans,cnt);
	cnt=1;
	while(sz-cnt>0&&(s[sz-cnt]==s[sz-cnt-1]||s[sz-cnt-1]=='*'))cnt++;
	ans=max(ans,cnt);
	cout<<ans<<'\n';
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
