#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int k;
		ll x;
		cin>>k>>x;
		vector<int>o;
		ll a=(1LL<<k+1)-x,b=x;
		int n=0;
		while(a!=b){
			ll aprev,bprev;
			if(a>b){
				bprev=b*2;
				aprev=a-b;
				o.push_back(1);
			}else{
				aprev=a*2;
				bprev=b-a;
				o.push_back(2);
			}
			a=aprev;
			b=bprev;
			n++;
		}
		cout<<n<<'\n';
		reverse(o.begin(),o.end());
		for(int i=0;i<n;i++)cout<<o[i]<<' ';
		cout<<'\n';
	}
}
