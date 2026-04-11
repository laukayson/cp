#include <bits/stdc++.h>
using namespace std;

int main(){
	string b="123",c="1234";
	vector<string>x,y,z;
	x.push_back("12");
	x.push_back("21");
	y.push_back(b);
	z.push_back(c);
	while(next_permutation(b.begin(),b.end()))y.push_back(b);
	while(next_permutation(c.begin(),c.end()))z.push_back(c);
	int t;cin>>t;
	while(t--){
		int n,j,k,a=0;cin>>n>>j>>k;
		if(n==12){
			for(int i=0;i<2;i++){
				if(x[j-1][i]==x[k-1][i])a++;
			}
			cout<<a<<'A'<<2-a<<"B\n";
		}else if(n==123){
			for(int i=0;i<3;i++){
				if(y[j-1][i]==y[k-1][i])a++;
			}
			cout<<a<<'A'<<3-a<<"B\n";
		}else{
			for(int i=0;i<4;i++){
				if(z[j-1][i]==z[k-1][i])a++;
			}
			cout<<a<<'A'<<4-a<<"B\n";
		}
	}
}
