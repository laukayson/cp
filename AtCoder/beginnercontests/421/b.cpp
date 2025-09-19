#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll rev(ll n){
	ll r=0;
	while(n){
		r*=10;
		r+=n%10;
		n/=10;
	}
	return r;
}

int main(){
	vector<ll>a(10);
	cin>>a[0]>>a[1];
	for(int i=2;i<10;i++)a[i]=rev(a[i-1]+a[i-2]);
	cout<<a[9]<<'\n';
}
