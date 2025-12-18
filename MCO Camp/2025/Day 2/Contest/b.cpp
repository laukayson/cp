#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	unordered_map<int,int>occ;
	for(int i=0;i<n;i++)occ[a[i]]++;
	vector<int>pow2(30);
	pow2[0]=2;
	for(int i=1;i<30;i++)pow2[i]=pow2[i-1]*2;
	int cnt=0;
	for(int i=0;i<n;i++){
		bool paired=0;
		for(int j=0;j<30;j++){
			int diff=pow2[j]-a[i];
			if((diff==a[i]&&occ[diff]>=2)||(diff!=a[i]&&occ[diff]>=1)){
				paired=1;
				break;
			}
		}
		if(!paired)cnt++;
	}
	cout<<cnt<<'\n';
}
