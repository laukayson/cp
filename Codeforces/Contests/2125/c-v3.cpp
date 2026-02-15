#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll good(ll x){
	ll n=0;
	for(int i=1;i<=x;i++){
		if((i%2)&&(i%3)&&(i%5)&&(i%7))n++;
	}
	return n;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll l,r;
		cin>>l>>r;
		cout<<good(210)*(r/210)+good(r%210)-(good(210)*((l-1)/210)+good((l-1)%210))<<'\n';
	}
}
