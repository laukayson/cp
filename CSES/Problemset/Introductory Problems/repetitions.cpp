#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int occ[n]={1};
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            occ[i]=occ[i-1]+1;
        }else{
            occ[i]++;
        }
    }
    cout<<*max_element(occ,occ+n);
}