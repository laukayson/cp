#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		vector<int>b(n);
		int cnt=0;
		for(int &x:b){
			cin>>x;
			if(x)cnt++;
		}	
		ll s=accumulate(b.begin(),b.end(),0LL);
		cout<<cnt-max(n-1-(s-cnt),0LL)<<'\n';
	}
}
