#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>a(n),b(n);
		int xr=0;
		for(int &x:a){
			cin>>x;
			xr^=x;
		}	
		for(int &x:b){
			cin>>x;
			xr^=x;
		}
		vector<int>bt;
		int m=1<<21;
		for(int i=0;i<21;i++){
			m>>=1;
			if(xr&m)bt.push_back(1);
			else bt.push_back(0);
		}
		int pos=0;
		while(pos<=20){
			if(bt[pos])break;
			pos++;
		}
		if(pos==21){
			cout<<"Tie\n";
			continue;
		}
		int l=0;
		for(int i=0;i<n;i++){
			if((a[i]^b[i])&(1<<(20-pos)))l=i;
		}
		if(l&1)cout<<"Mai\n";
		else cout<<"Ajisai\n";
	}
}
