#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll p3[19];

void solve(){
	p3[0]=1;
	for(int i=1;i<19;i++)p3[i]=3*p3[i-1];
	int n,k;cin>>n>>k;
	vector<int>b3;
	b3.push_back(n%3);
	while(n/=3)b3.push_back(n%3);
	int d=accumulate(b3.begin(),b3.end(),0);
	if(d>k){
		cout<<"-1\n";
		return;
	}
	k-=d;
	k/=2;
	for(int i=b3.size()-1;i>0;i--){
		if(b3[i]<=k){
			b3[i-1]+=3*b3[i];
			k-=b3[i];
			b3[i]=0;
		}else{
			b3[i-1]+=3*k;
			b3[i]-=k;
			k=0;
			break;
		}
	}
	ll c=p3[1]*b3[0];
	for(int i=1;i<b3.size();i++)c+=(p3[i+1]+i*p3[i-1])*b3[i];
	cout<<c<<'\n';
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
