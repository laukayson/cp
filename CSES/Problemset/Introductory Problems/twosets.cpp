#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n;
	cin>>n;
	ll total=n*(n+1)/2;
	if(total&1){
		cout<<"NO"<<'\n';
		return 0;
	}
	cout<<"YES"<<'\n';
	vector<ll>s1;
	vector<ll>s2;
	ll sum=total/2;
	int num_s1=0,num_s2=0;
	for(ll i=n;i>0;i--){
		if(sum>=i){
			num_s1++;
			sum-=i;
			s1.push_back(i);
		}else{
			num_s2++;
			s2.push_back(i);
		}
	}
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	cout<<num_s1<<'\n';
	for(int i=0;i<num_s1;i++)cout<<s1[i]<<' ';
	cout<<'\n'<<s2.size()<<'\n';
	for(int i=0;i<num_s2;i++)cout<<s2[i]<<' ';
}