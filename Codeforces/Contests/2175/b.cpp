#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,l,r;cin>>n>>l>>r;
		vector<int>b(n+1);
		for(int i=1;i<=n;i++){
			if(i==r)b[i]=l-1;
			else b[i]=i;
		}
		for(int i=1;i<=n;i++)cout<<(b[i]^b[i-1])<<(i==n-1?'\n':' ');
	}
}
