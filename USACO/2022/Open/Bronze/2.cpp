#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,minliars=1000;
	cin>>n;
	vector<char>sign(n);
	vector<int>p(n);
	for(int i=0;i<n;i++)cin>>sign[i]>>p[i];
	for(int i=0;i<n;i++){
		int cnt=0,check=p[i];
		for(int j=0;j<n;j++){
			if((sign[j]=='G'&&check>=p[j])||(sign[j]=='L'&&check<=p[j]))continue;
			else cnt++;
		}
		minliars=min(minliars,cnt);
	}
	cout<<minliars<<'\n';
}
