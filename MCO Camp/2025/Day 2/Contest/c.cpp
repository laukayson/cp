#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
	int n;
	cin>>n;
	vector<pair<ll,ll>>ab(n);
	for(int i=0;i<n;i++)cin>>ab[i].first>>ab[i].second;
	sort(ab.begin(),ab.end(),[](const auto&x,const auto&y){return x.second<y.second;});
	ll cnt=0,cost=0;
	int l=0,r=n-1;
	while(l<=r){
		if(cnt>=ab[l].second){
			cost+=ab[l].first;
			cnt+=ab[l].first;
			l++;
		}else{
			ll rem=min(ab[l].second-cnt,ab[r].first);
			cost+=2*rem;
			cnt+=rem;
			ab[r].first-=rem;
			if(ab[r].first==0)r--;
		}
	}
	cout<<cost<<'\n';
}
