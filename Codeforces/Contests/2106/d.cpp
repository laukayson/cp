#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int>a(n),b(n),p(n),s(n);
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<m;i++)cin>>b[i];
		for(int i=0,j=0;i<n;i++){
			if(i>0)p[i]=p[i-1];
			if(a[i]>=b[j]){
				p[i]++;
				j++;
			}
		}
		for(int i=n-1,j=m-1;i>=0;i--){
			if(i<n-1)s[i]=s[i+1];
			if(a[i]>=b[j]){
				s[i]++;
				j--;
			}
		}
		int k=1e9+5,maxsum=s[0];
		for(int i=0;i<n;i++){
			if(i==n-1)maxsum=max(maxsum,p[n-1]);
			else maxsum=max(maxsum,p[i]+s[i+1]);
		}
		if(maxsum<m-1)k=-1;
		else if(maxsum>m-1)k=0;
		else for(int i=0;i<=n;i++){
			if(i==0){
				if(s[0]==m-1)k=min(k,b[0]);
			}else if(i==n){
				if(p[n-1]==m-1)k=min(k,b[m-1]);
			}else{
				if(p[i-1]+s[i]==m-1)k=min(k,b[p[i-1]]);
			}
		}
		cout<<k<<'\n';
	}
}
