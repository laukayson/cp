#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin>>n;
	vector<pair<int,int>>p(n);
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		p[i]=make_pair(a,b);
	}
	sort(p.begin(),p.end(),
		[](const auto &l,const auto &r){return l.first+l.second>r.first+r.second;});
	ll diff=0;
	for(int i=0;i<n;i++){
		if(i&1)diff-=p[i].second;
		else diff+=p[i].first;
	}
	cout<<diff<<'\n';
}
