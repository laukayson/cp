#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll l,r;
		cin>>l>>r;
		ll a[]={2,3,5,7},g=r-l+1;
		for(int m=1;m<(1<<4);m++){
			ll s=0,temp=1;
			for(int i=0;i<4;i++){
				if(m&(1<<i)){
					temp*=a[i];
					s++;
				}
			}
			if(s&1)temp*=-1;
			g+=r/temp-(l-1)/temp;
		}
		cout<<g<<'\n';
	}
}
