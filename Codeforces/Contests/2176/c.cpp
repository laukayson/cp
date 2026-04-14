#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<ll>a(n),ans(n+1),o,e;
		for(ll &x:a){
			cin>>x;
			if(x&1)o.push_back(x);
			else e.push_back(x);
		}
		sort(o.rbegin(),o.rend());
		sort(e.rbegin(),e.rend());
		if(o.size()){
			ans[1]=o[0];
			if(o.size()==1||o.size()==2){
				for(int k=2;k<=e.size()+1;k++){
					ans[k]=e[k-2];
					ans[k]+=ans[k-1];
				}
			}else if(e.size()==0){
				for(int k=1;k<=n;k+=2)ans[k]=o[0];
			}else if(o.size()&1){
				for(int k=2;k<=e.size()+1;k++){
					ans[k]=e[k-2];
					ans[k]+=ans[k-1];
				}
				for(int k=e.size()+2;k<=n;k++)ans[k]=ans[k-2];
			}else if(!(o.size()&1)){
				for(int k=2;k<=e.size()+1;k++){
					ans[k]=e[k-2];
					ans[k]+=ans[k-1];
				}
				for(int k=e.size()+2;k<n;k++)ans[k]=ans[k-2];
			}
		}
		for(int k=1;k<=n;k++)cout<<ans[k]<<(k==n?'\n':' ');
	}
}
