#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1e9+7;

ll binpow(ll a,ll n){
	if(n==1){
		return a;
	}
	if(n&1){
		return ((binpow(a,n/2)%MOD)*(binpow(a,n/2)%MOD)*a)%MOD;
	}else{
		return ((binpow(a,n/2)%MOD)*(binpow(a,n/2)%MOD))%MOD;
	}
}

int main(){
	ll n;
	cin>>n;
	cout<<binpow(2,n)<<'\n';
}