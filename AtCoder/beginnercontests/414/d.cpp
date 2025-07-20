#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int>x(n),d(n);
	for(int i=0;i<n;i++)cin>>x[i];
	sort(x.begin(),x.end());
	for(int i=1;i<n;i++)d[i]=x[i]-x[i-1];
	sort(d.begin(),d.end(),greater<int>());
	int s=x[n-1]-x[0];
	for(int i=0;i<m-1;i++)s-=d[i];
	cout<<s<<'\n';
}
