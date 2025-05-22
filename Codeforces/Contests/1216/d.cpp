#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	int amax=*max_element(a.begin(),a.end()),amin=*min_element(a.begin(),a.end()),z=amax-amin;
	for(int i=0;i<n;i++)z=gcd(z,amax-a[i]);
	ll y=0;
	for(int i=0;i<n;i++)y+=(amax-a[i])/z;
	cout<<y<<' '<<z<<'\n';
}
