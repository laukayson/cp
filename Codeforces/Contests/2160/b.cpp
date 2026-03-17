#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<ll>b(n);
		for(int i=0;i<n;i++)cin>>b[i];
		vector<int>a(n);
		int cur=1;
		a[0]=cur++;
		for(int i=1;i<n;i++){
			ll d=b[i]-b[i-1];
			if(d==i+1)a[i]=cur++;
			else a[i]=a[i-d];
		}
		for(int i=0;i<n;i++)cout<<a[i]<<(i==n-1?'\n':' ');
	}
}
