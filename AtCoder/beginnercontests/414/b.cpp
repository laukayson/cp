#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin>>n;
	string s="";
	ll len=0;
	for(int i=0;i<n;i++){
		char c;
		ll l;
		cin>>c>>l;
		len+=l;
		if(len>100){
			cout<<"Too Long"<<'\n';
			return 0;
		}
		for(int j=0;j<l;j++)s+=c;
	}
	cout<<s<<'\n';
}
