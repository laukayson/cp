#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		if(!n){
			cout<<"YES\n";
			continue;
		}
		vector<int>b;
		int o=0;
		while(n){
			if(n&1){
				b.push_back(1);
				o++;
			}else b.push_back(0);
			n>>=1;
		}
		int z=0;
		while(z<b.size()-1&&!b[z])z++;
		for(int i=0;i<z;i++)b.push_back(0);
		reverse(b.begin(),b.end());
		vector<int>b2=b;
		reverse(b2.begin(),b2.end());
		if(b==b2&&!(o&1))cout<<"YES\n";
		else cout<<"NO\n";
	}
}
