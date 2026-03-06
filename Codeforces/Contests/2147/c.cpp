#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	string s;cin>>s;
	int idx=0;
	vector<int>seg;
	seg.push_back(-2);
	while((idx=s.find("11",idx))!=-1){
		seg.push_back(idx);
		idx+=2;
	}
	seg.push_back(n);
	for(int i=0;i<seg.size()-1;i++){
		string sub=s.substr(seg[i]+2,seg[i+1]-seg[i]-2);
		if((sub.find("00")!=-1)||!(count(sub.begin(),sub.end(),'0')&1))continue;
		else{
			if(!((seg[i]==-2&&s[0]=='0')||(seg[i+1]-1==n-1&&s[n-1]=='0'))){
				cout<<"NO\n";
				return;
			}
		}
	}
}

int main(){
	int t;cin>>t;
	while(t--)solve();
}
