#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;cin>>a>>b;
	int a1=a,b1=b;
	vector<int>A,B,X,two(31);
	two[0]=1;
	for(int i=1;i<31;i++)two[i]=two[i-1]*2;
	while(a1){
		A.push_back(a1%2);
		a1/=2;
	}
	while(b1){
		B.push_back(b1%2);
		b1/=2;
	}
	int diff=A.size()-B.size();
	if(diff>0)for(int i=0;i<diff;i++)B.push_back(0);
	else for(int i=0;i<-diff;i++)A.push_back(0);
	for(int i=0;i<A.size();i++){
		X.push_back(A[i]^B[i]);
		if(two[i]>a){
			cout<<"-1\n";
			return;
		}
	}
	int k=0;
	for(int i=0;i<X.size();i++)if(X[i])k++;
	cout<<k<<'\n';
	for(int i=0;i<X.size();i++)if(X[i])cout<<two[i]<<' ';
	if(k)cout<<'\n';
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
