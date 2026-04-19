#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v(17);
	v[0]=1;
	for(int i=1;i<17;i++)v[i]=v[i-1]*2;
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a=1,j=0,l=1;
		while(a+v[j+1]<=pow(2,n))a+=v[++j];
		cout<<a<<' ';
		while(a/=2){
			cout<<a<<' ';
			if(l>=2){
				for(int i=1;i<pow(2,l-1);i++)cout<<a+i*pow(2,n-l+1)<<' ';
			}
			l++;
		}
		for(int i=0;i<pow(2,n);i+=2)cout<<i<<' ';
		cout<<'\n';
	}
}
