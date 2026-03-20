#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		int n,x;cin>>n>>x;
		vector<int>a(n),ord;
		for(int &i:a)cin>>i;
		sort(a.begin(),a.end());
		ll s=0,p=0;
		int l=0,r=n-1;
		while(l<=r){
			if((s+(ll)a[r])/x>s/x){
				ord.push_back(a[r]);
				s+=a[r];
				p+=a[r];
				r--;
			}else{
				ord.push_back(a[l]);
				s+=a[l];
				l++;
			}
		}
		cout<<p<<'\n';
		for(int i=0;i<n;i++)cout<<ord[i]<<(i==n-1?'\n':' ');
	}
}
