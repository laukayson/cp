#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,s;cin>>n>>s;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	int sum=accumulate(a.begin(),a.end(),0);
	if(sum>s){
		for(int i=0;i<n;i++)cout<<a[i]<<(i==n-1?'\n':' ');
		return;
	}else if(sum==s||s-sum>1){
		cout<<"-1\n";
		return;
	}else{
		for(int i=0;i<count(a.begin(),a.end(),0);i++)cout<<"0 ";
		for(int i=0;i<count(a.begin(),a.end(),2);i++)cout<<"2 ";
		for(int i=0;i<count(a.begin(),a.end(),1);i++)cout<<"1 ";
		cout<<'\n';
	}
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
