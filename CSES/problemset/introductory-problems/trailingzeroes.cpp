#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int z=0,exp=1;
	while(pow(5,exp)<=n){
		z+=n/pow(5,exp);
		exp++;
	}
	cout<<z<<'\n';
}