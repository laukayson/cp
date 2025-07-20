#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,l,r,cnt=0;
	cin>>n>>l>>r;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		if(x<=l&&y>=r)cnt++;
	}
	cout<<cnt<<'\n';
}
