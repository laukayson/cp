#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("balancing.in","r",stdin);
	freopen("balancing.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int>x(n),y(n),a,b;
	for(int i=0;i<n;i++)cin>>x[i]>>y[i];
	for(int i=0;i<n;i++){
		a.push_back(x[i]-1);
		a.push_back(x[i]+1);
		b.push_back(y[i]-1);
		b.push_back(y[i]+1);
	}
	for(int i=0;i<n*2;i++){
		for(int j=0;j<n*2;j++){
			int q1=0,q2=0,q3=0,q4=0;
			for(int k=0;k<n;k++){
				if(x[k]<a[i]&&y[k]<b[j])q1++;
				else if(x[k]<a[i]&&y[k]>b[j])q2++;
				else if(x[k]>a[i]&&y[k]>b[j])q3++;
				else q4++;
			}
			m=min(m,max(q1,max(q2,max(q3,q4))));
		}
	}
	cout<<m<<'\n';
}
