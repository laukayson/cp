#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	int n,m,L,jump=1;
	cin>>n>>m>>L;
	vector<pair<pair<int,int>,bool>>p;
	for(int i=0;i<n;i++){
		int l,r;
		cin>>l>>r;
		p.emplace_back(make_pair(l,r),0);
	}
	for(int i=0;i<m;i++){
		int x,v;
		cin>>x>>v;
		p.emplace_back(make_pair(x,v),1);
	}
	sort(p.begin(),p.end());
	priority_queue<int>pq;
	int cnt=0;
	for(int i=0;i<n+m;i++){
		if(p[i].second)pq.push(p[i].first.second);
		else{
			int l,r;
			tie(l,r)=p[i].first;
			while(jump<r-l+2&&!pq.empty()){
				jump+=pq.top();
				pq.pop();
				cnt++;
			}
			if(jump<r-l+2){
				cout<<-1<<'\n';
				return;
			}
		}
	}
	cout<<cnt<<'\n';
}
 
int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
