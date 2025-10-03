#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,maxed=0;
	cin>>n;
	vector<int>x(n),y(n);
	for(int i=0;i<n;i++)cin>>x[i];
	for(int i=0;i<n;i++)cin>>y[i];
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			maxed=max((int)pow(x[j]-x[i],2)+(int)pow(y[j]-y[i],2),maxed);
		}
	}
	cout<<maxed<<'\n';
}
