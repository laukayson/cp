#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>a(n),b(n),c(n),bb(n,1),cc(n,1);
		for(int &x:a)cin>>x;
		for(int &x:b)cin>>x;
		for(int &x:c)cin>>x;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[i]>=b[j])bb[(j-i+n)%n]=0;
			}
		}
		for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(b[j]>=c[k])cc[(k-j+n)%n]=0;
            }
		}
		int ab=0,bc=0;
		for(int x:bb){
			if(x)ab++;
		}
		for(int x:cc){
			if(x)bc++;
		}
		cout<<1LL*ab*bc*n<<'\n';
	}
}