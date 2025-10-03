#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("diamond.in","r",stdin);
	freopen("diamond.out","w",stdout);
	int n,k,maxdia=0;
	cin>>n>>k;
	vector<int>d(n);
	for(int i=0;i<n;i++)cin>>d[i];
	sort(d.begin(),d.end());
	for(int i=0;i<n;i++){
		int lb=d[i],ub=d[i]+k,cnt=0;
		for(int j=0;j<n;j++){
			if(lb<=d[j]&&d[j]<=ub)cnt++;
		}
		maxdia=max(cnt,maxdia);
	}
	cout<<maxdia<<'\n';
}
