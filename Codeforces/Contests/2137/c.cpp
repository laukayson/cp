#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		ll a,b;cin>>a>>b;
		if(a&1&&b&1)cout<<a*b+1<<'\n';
		else if((a&1&&b%4!=0)||(!(a&1)&&b&1))cout<<-1<<'\n';
		else cout<<a*(b/2)+2<<'\n';
	}
}
