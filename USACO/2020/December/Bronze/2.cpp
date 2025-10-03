#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>p(n);
	for(int i=0;i<n;i++)cin>>p[i];
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			int sum=0;
			for(int k=j;k<=j+i;k++)sum+=p[k];
			int avg=sum/(i+1);
			if(avg*(i+1)==sum){
				for(int k=j;k<=j+i;k++){
					if(p[k]==avg){
						cnt++;
						break;
					}
				}
			}
		}
	}
	cout<<cnt<<'\n';
}
