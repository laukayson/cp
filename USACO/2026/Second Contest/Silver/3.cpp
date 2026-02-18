#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector<int>a(n),b(2*n),itvs(2*n,1e9);
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=b[i+n]=a[i];
	}
	set<int>s(a.begin(),a.end());
	for(int i=0;i<2;i++){
		vector<int>cnt(n);
		int rem=s.size(),r=-1,minitv=1e9;
		for(int l=0;l<b.size();l++){
			while((r+1)<b.size()&&rem>0){
				r++;
				cnt[b[r]]++;
				if(cnt[b[r]]==1)rem--;
			}
			if(rem==0)minitv=min(minitv,r-2*l);
			itvs[l]=min(itvs[l],minitv+l);
			cnt[b[l]]--;
			if(cnt[b[l]]==0)rem++;
		}
		reverse(b.begin(),b.end());
		reverse(itvs.begin(),itvs.end());
	}
	for(int j=0;j<n;j++)cout<<min(itvs[j],itvs[j+n])<<(j==n-1?'\n':' ');
}
