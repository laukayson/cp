#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k,l,r;cin>>n>>k>>l>>r;
		vector<int>a(n);
		for(int&x:a)cin>>x;
		ll ans=0;
		int x=-1,y=-1;
		vector<vector<int>>ixy;
		map<int,int>m;
		for(int i=0;i<n;i++){
			if(i>0&&--m[a[i-1]]==0)m.erase(a[i-1]);
			while(x+1<n&&m.size()<k){
				x++;
				m[a[x]]++;
			}
			y=max(x,y);
			if(m.size()==k){
				while(y+1<n){
					if(!m.count(a[y+1]))break;
					y++;
				}
			}
			if(m.size()==k)ixy.push_back({i,x,y});
		}
		for(auto v:ixy)ans+=max(0,min(v[2],v[0]+r-1)-max(v[1],v[0]+l-1)+1);
		cout<<ans<<'\n';
	}
}
