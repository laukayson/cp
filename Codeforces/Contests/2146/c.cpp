#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	string s;cin>>s;
	vector<int>p(n);
	queue<int>q;
	int curr=1,cnt=0;
	for(int i=0;i<n;i++){
		if(s[i]=='0'){
			if(curr)curr=0;
			cnt++;
			if(i==n-1){
				if(cnt==1){
					cout<<"NO\n";
					return;
				}
				q.push(cnt);
				q.back()--;
			}
		}else{
			if(cnt==1){
				cout<<"NO\n";
				return;
			}
			q.push(cnt);
			q.back()--;
			curr=1;
			cnt=0;
		}
	}
	cout<<"YES\n";
	curr=1;
	for(int i=0;i<n;i++){
		if(s[i]=='0'){
			if(curr)curr=0;
			p[i]=i+1+q.front();
			q.front()-=2;
		}else{
			p[i]=i+1;
			q.pop();
			curr=1;
		}
	}
	for(int i=0;i<n;i++)cout<<p[i]<<(i==n-1?'\n':' ');
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
