#include <bits/stdc++.h>
using namespace std;

struct C{
	int l,r,re;
};

bool cmpl(const C &a, const C &b) {
    return a.l<b.l;
}

struct cmpre{
	bool operator()(const C &a,const C &b){
		return a.re<b.re;
	}
};

void solve(){
	int n,k;
	cin>>n>>k;
	vector<C>c(n)
	for(int i=0;i<n;i++)cin>>c[i].l>>c[i].r>>c[i].re;
	sort(c.begin(),c.end(),cmpl);
	priority_queue<C,vector<C>,cmpre>pq;
	int curr=k,i=0;
	bool ch=1;
	while(ch){
		ch=0;
		while(i<n&&c[i].l<=curr){
			pq.push(c[i]);
			i++;
		}
		while(!pq.empty()){
			if(pq.top().r>=curr&&pq.top().re>curr){
				curr=pq.top().re;
				ch=1;
				pq.pop();
				break;
			}
			pq.pop();
		}
	}
	cout<<curr<<'\n';
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
