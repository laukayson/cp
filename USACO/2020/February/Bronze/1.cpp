#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	freopen("triangles.in","r",stdin);
	freopen("triangles.out","w",stdout);
	int n;
	ll maxarea=0;
	cin>>n;
	vector<ll>x(n),y(n);
	for(int i=0;i<n;i++)cin>>x[i]>>y[i];
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				ll x1=x[i],x2=x[j],x3=x[k],y1=y[i],y2=y[j],y3=y[k];
				if(((x1==x2&&x1!=x3)||(x2==x3&&x2!=x1)||(x3==x1&&x3!=x2))&&((y1==y2&&y1!=y3)||(y2==y3&&y2!=y1)||(y3==y1&&y3!=y2))){
					maxarea=max(maxarea,abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
				}
			}
		}
	}
	cout<<maxarea<<'\n';
}
