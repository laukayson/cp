	#include <bits/stdc++.h>
	using namespace std;
	typedef long long ll;
	
	int main(){
		int t;cin>>t;
		while(t--){
			int n;cin>>n;
			vector<ll>a(n),b(n);
			for(int i=0;i<n;i++)cin>>a[i];
			b=a;
			for(int i=1;i<n;i+=2){
				if(i!=n-1){
					b[i+1]=max(b[i+1]-max(b[i-1]+b[i+1]-b[i],0LL),0LL);
					b[i-1]=max(b[i-1]-max(b[i-1]+b[i+1]-b[i],0LL),0LL);
				}else{
					b[i-1]=min(b[i],b[i-1]);
				}
			}
			ll cnt=0;
			for(int i=0;i<n;i++)cnt+=a[i]-b[i];
			cout<<cnt<<'\n';
		}
	}
