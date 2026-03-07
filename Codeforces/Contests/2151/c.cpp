#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>a(2*n),out(n),in(n);
		ll sout=0,sin=0;
		for(int i=0;i<n*2;i++){
			cin>>a[i];
			if(i&1)sout+=a[i];
			else sin+=a[i];
		}
		ll dout=sout,din=sin;
		for(int k=1;k<=n;k++){
			cout<<sout-sin<<' ';
			if(k&1)dout-=a[2*n-k],din-=a[k-1];
			else dout-=a[k-1],din-=a[2*n-k];
			if(k&1)sout+=din-dout,sin+=dout-din;
			else sout+=dout-din,sin+=din-dout;
		}
		cout<<'\n';
	}
}
