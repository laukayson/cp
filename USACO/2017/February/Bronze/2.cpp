#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("circlecross.in","r",stdin);
	freopen("circlecross.out","w",stdout);
	string crossing;
	cin>>crossing;
	vector<int>s(26,-1),e(26,-1);
	for(int i=0;i<52;i++){
		if(s[crossing[i]-65]==-1)s[crossing[i]-65]=i;
		else e[crossing[i]-65]=i;
	}
	int cnt=0;
	for(int i=0;i<25;i++){
		for(int j=i+1;j<26;j++){
			if((s[i]<s[j]&&e[i]>s[j]&&e[j]>e[i])||(s[j]<s[i]&&e[j]>s[i]&&e[i]>e[j]))cnt++;
		}
	}
	cout<<cnt<<'\n';
}
