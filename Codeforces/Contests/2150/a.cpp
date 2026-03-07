#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		string s;cin>>s;
		vector<int>a(m);
		map<int,int>b;
		for(int &ai:a){
			cin>>ai;
			b[ai]=1;
		}
		int x=1;
		for(int i=0;i<n;i++){
			if(s[i]=='A'){
				x++;
				b[x]=1;
			}else{
				x++;
				while(b[x])x++;
				b[x]=1;
				while(b[x])x++;
			}
		}
		int ans=0;
		for(auto c:b)if(c.second)ans++;
		cout<<ans<<'\n';
		for(auto c:b)if(c.second)cout<<c.first<<' ';
		cout<<'\n';
		
	}
}
