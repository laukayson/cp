#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string>r(n+1);
	for(int i=1;i<=n;i++)cin>>r[i];
	int y;
	string x;
	cin>>y>>x;
	if(r[y]==x)cout<<"Yes"<<'\n';
	else cout<<"No"<<'\n';
}
