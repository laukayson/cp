#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<int>p(n);
	for(int i=0;i<n;i++)cin>>p[i];
	string s;
	int i=0,j=n-1;
	for(int k=0;k<n;k++){
		if(k&1){
			if(p[i]<p[j]){
				s+="R";
				j--;
			}else{
				s+="L";
				i++;
			}
		}else{
			if(p[i]<p[j]){
				s+="L";
				i++;
			}else{
				s+="R";
				j--;
			}	
		}
	}
	cout<<s<<'\n';
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
