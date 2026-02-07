#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll l,r;
		cin>>l>>r;
		l-=1;
		cout<<r-((r/2+r/3+r/5+r/7-r/6-r/10-r/14-r/15-r/21-r/35+r/30+r/42+r/70+r/105-r/210)-(l/2+l/3+l/5+l/7-l/6-l/10-l/14-l/15-l/21-l/35+l/30+l/42+l/70+l/105-l/210))-l<<'\n';
	}
}
