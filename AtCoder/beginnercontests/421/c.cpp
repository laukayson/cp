#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	ll swaps_a=0,swaps_b=0;
	string s;
	cin>>n>>s;
	vector<int>a;
	for(int i=0;i<2*n;i++)if(s[i]=='A')a.push_back(i);
	for(int i=0;i<2*n;i++){
		if(i&1)swaps_b+=abs(a[i/2]-i);
		else swaps_a+=abs(a[i/2]-i);
	}
	cout<<min(swaps_a,swaps_b)<<'\n';
}
