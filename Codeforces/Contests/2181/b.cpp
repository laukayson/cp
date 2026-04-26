#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		priority_queue<int>a,b;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			a.push(x);
		}
		for(int i=0;i<m;i++){
			int x;cin>>x;
			b.push(x);
		}
		while(!a.empty()&&!b.empty()){
			if(a.top()>=b.top())b.pop();
			else{
				b.push(b.top()-a.top());
				b.pop();
			}
			if(b.empty())cout<<"Alice\n";
			else{
				if(b.top()>=a.top())a.pop();
				else{
					a.push(a.top()-b.top());
					a.pop();
				}
				if(a.empty())cout<<"Bob\n";
			}
		}
	}
}
