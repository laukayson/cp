#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k,q;cin>>n>>k>>q;
		vector<int>a(n,-1),c1(n),c2(n);
		while(q--){
			int c,l,r;cin>>c>>l>>r;
			for(int i=l-1;i<r;i++){
				if(c==1)c1[i]=1;
				else c2[i]=1;
			}
		}
		int mex_val=0;
		for(int i=0;i<n;i++){
			if(c1[i]==c2[i])a[i]=k+1;
			else if(c1[i])a[i]=k;
			else{
				a[i]=mex_val%k;
				mex_val++;
			}
		}
		for(int i=0;i<n;i++)cout<<a[i]<<(i==n-1?'\n':' ');
	}
}
