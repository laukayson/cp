#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll y,x;
		cin>>y>>x;
		if(y>=x){
			if(y&1)cout<<(ll)powl(y-1,2)+x<<'\n';
			else cout<<(ll)powl(y,2)-x+1<<'\n';
		}else{
			if(x&1)cout<<(ll)powl(x,2)-y+1<<'\n';
			else cout<<(ll)powl(x-1,2)+y<<'\n';
		}
	}
}