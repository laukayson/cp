#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,int>m;
		int x=0,y=0,z=0;
		for(int i=0;i<2*n;i++){
			int a;cin>>a;
			m[a]++;
		}
		for(auto [k,v]:m){
			if(v&1)x++;
			else if(!(v%4))z++;
			else y++;
		}
		int ans=x+2*y+2*z;
		if(!(x>0||!(z&1)))ans-=2;
		cout<<ans<<'\n';
	}
}
