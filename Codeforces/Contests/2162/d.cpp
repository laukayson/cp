#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll query(int q,int l,int r){
	ll x;
	cout<<q<<' '<<l<<' '<<r<<endl;
	cin>>x;
	return x;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		ll sum=query(2,1,n);
		sum-=n*(n+1)/2;
		ll diff=sum-1;
		int l=1,r=n;
		while(l<r){
			int m=(l+r)/2;
			ll a=query(1,1,m),b=query(2,1,m);
			if(a<b)r=m;
			else l=m+1;
		}
		cout<<"! "<<l<<' '<<diff+l<<endl;
	}
}
