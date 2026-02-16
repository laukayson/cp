#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<pair<int,int>>a;
	for(int i=1;i<=n;i++){
		cout<<"? "<<i<<' '<<n;
		for(int j=1;j<=n;j++)cout<<' '<<j;
		cout<<endl;
		int l;cin>>l;
		a.push_back(make_pair(l,i));
	}
	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());
	vector<int>v;
	int k=a[0].first,prev=a[0].second;
	v.push_back(prev);
	for(int i=1;i<n;i++){
		if(k-1==a[i].first){
			cout<<"? "<<prev<<" 2 "<<prev<<' '<<a[i].second<<endl;
			int l;cin>>l;
			if(l==2){
				v.push_back(a[i].second);
				prev=a[i].second;
				k--;
			}
		}
	}
	cout<<"! "<<a[0].first;
	for(int i=0;i<a[0].first;i++)cout<<' '<<v[i];
	cout<<endl;
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
