#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int t;cin>>t;
	while(t--){
		int n,m,k;cin>>n>>m>>k;
		int l=1,r=n,a=k-1,b=n-k;
		if(a>b)swap(a,b);
		while(l<r){
			int mid=(l+r+1)/2,x=min(a,(mid-1)/2),y=mid-1-x;
			if(x+2*y-1<=m)l=mid;
			else r=mid-1;
		}
		cout<<l<<'\n';
	}
}
