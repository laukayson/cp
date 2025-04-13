#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<char>>g(n,vector<char>(m));
	pair<int,int>s,e;
	for(int i=0;i<n;i++){
		string r;
		cin>>r;
		for(int j=0;j<m;j++){
			g[i][j]=r[j];
			if(r[j]=='A')s=make_pair(i,j);
			else if(r[j]=='B')e=make_pair(i,j);
		}
	}
	vector<vector<int>>d(n,vector<int>(m,-1));
	d[s.first][s.second]=0;
	vector<vector<pair<int,int>>>par(n,vector<pair<int,int>>(m));
	queue<pair<int,int>>q;
	q.push(s);
	const int dx[]={-1,0,1,0},dy[]={0,-1,0,1};
	while(!q.empty()){
		pair<int,int>v=q.front();
		q.pop();
		int x=v.first,y=v.second;
		int currd=d[x][y];
		if(v==e)break;
		for(int i=0;i<4;i++){
			int X=x+dx[i],Y=y+dy[i];
			if(0<=X&&X<n&&0<=Y&&Y<m&&d[X][Y]==-1&&g[X][Y]!='#'){
				d[X][Y]=currd+1;
				q.push(make_pair(X,Y));
				par[X][Y]=v;
			}
		}
	}
	if(d[e.first][e.second]==-1){
		cout<<"NO"<<'\n';
	}else{
		cout<<"YES"<<'\n';
		string p="";
		int x=e.first,y=e.second;
		while(!(x==s.first&&y==s.second)){
			pair<int,int>v=par[x][y];
			int X=v.first,Y=v.second;
			if(x==X-1&&y==Y)p+="U";
			else if(x==X+1&&y==Y)p+="D";
			else if(x==X&&y==Y-1)p+="L";
			else if(x==X&&y==Y+1)p+="R";
			x=X;
			y=Y;
		}
		reverse(p.begin(),p.end());
		cout<<p.length()<<'\n'<<p<<'\n';
	}
}