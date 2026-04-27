#include <bits/stdc++.h>
using namespace std;

int main(){
	int w,h,d,n;cin>>w>>h>>d>>n;
	int pw=gcd(n,w),nw=n/pw,ph=gcd(nw,h),nh=nw/ph,pd=gcd(nh,d),nd=nh/pd;
	if(nd==1)cout<<pw-1<<' '<<ph-1<<' '<<pd-1<<'\n';
	else cout<<"-1\n";
}
