#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,maxa=0,total=0;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			maxa=max(maxa,a[i]);
			total+=a[i];
		}
		if(total==0){
			cout<<0<<'\n';
			continue;
		}
		for(int sum=maxa;sum<=total;sum++){
			if(total%sum==0){
				int curr=0;
				bool equal=1;
				for(int i=0;i<n;i++){
					curr+=a[i];
					if(curr==sum)curr=0;
					else if(curr>sum){
						equal=0;
						break;
					}
				}
				if(equal){
					cout<<n-total/sum<<'\n';
					break;
				};
			}
		}
	}
}
