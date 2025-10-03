#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("pails.in","r",stdin);
	freopen("pails.out","w",stdout);
	int x,y,m,maxmilk=0;
	cin>>x>>y>>m;
	for(int i=0;i<=m/x;i++){
		maxmilk=max(maxmilk,i*x+((m-i*x)/y)*y);
	}
	cout<<maxmilk<<'\n';
}
