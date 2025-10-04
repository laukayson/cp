#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("lifeguards.in","r",stdin);
	freopen("lifeguards.out","w",stdout);
	int n,maxtime=0;
	cin>>n;
	vector<int>s(n),e(n);
	for(int i=0;i<n;i++)cin>>s[i]>>e[i];
	for(int i=0;i<n;i++){
		int cnt=0;
		bool t[1005]={0};
		for(int j=0;j<n;j++){
			if(j!=i){
				for(int time=s[j];time<e[j];time++)t[time]=1;
			}
		}
		for(int j=0;j<1004;j++)if(t[j])cnt++;
		maxtime=max(maxtime,cnt);
	}
	cout<<maxtime<<'\n';
}
