#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;cin>>n>>m;
    vector<vector<int>>s(n);
    set<int>se;
    vector<int>occ(m+1);
    for(int i=0;i<n;i++){
        int l;cin>>l;
        for(int j=0;j<l;j++){
            int e;cin>>e;
            s[i].push_back(e);
            se.insert(e);
            occ[e]++;
        }
    }
    if(se.size()!=m){
    	cout<<"NO\n";
    	return;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
    	bool full=1;
    	for(int e:s[i]){
    		occ[e]--;
    		if(!occ[e])full=0;
    	}
    	if(full)cnt++;
    	for(int e:s[i])occ[e]++;
    }
    if(cnt>=2)cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int t;cin>>t;
    while(t--)solve();
}
