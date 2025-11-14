#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,maxt;
	cin>>n>>m;
	vector<int>t(n),x(n);
	for(int i=0;i<n;i++)cin>>t[i];
	map<int,int>pairs;
	for(int i=0;i<n;i++){
		if(pairs.find(t[i])==pairs.end())pairs[t[i]]=1;
		else pairs[t[i]]++;
	}
	for(auto guest:pairs){
		if(m<=guest.second){
			maxt=guest.first;
			break;
		}else m-=guest.second;
	}
	int i=0;
	while(m>0){
		if(t[i]<maxt)x[i]=1;
		if(t[i]==maxt)m--;
	}
	for(int i=0;i<n;i++)cout<<x[i]<<' ';
}
