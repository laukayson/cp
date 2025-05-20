#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int>a(n+1),t(n+1);
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>t[i];
	vector<int>sec(n+1),l(n+1);
	for(int i=1;i<=n;i++)sec[i]=sec[i-1]+a[i];
	for(int i=1;i<=n;i++){
		l[i]=l[i-1];
		if(t[i]==1)l[i]+=a[i];
	}
	int maxt=0;
	for(int i=1;i<=n-k+1;i++)maxt=max(maxt,l[i-1]-l[0]+sec[i+k-1]-sec[i-1]+l[n]-l[i+k-1]);
	cout<<maxt<<'\n';
}
