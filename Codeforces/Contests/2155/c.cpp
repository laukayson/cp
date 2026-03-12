#include <bits/stdc++.h>
using namespace std;
// 676767677

bool validar(vector<int>&x,int n,vector<int>&a){
    bool flag=0;
    int visibles=1;
    for(int i=2;i<=n;i++)if(x[i]==1)visibles++;
    if(visibles==a[1]){
        flag=1;
        for(int i=1;i<n;i++){
            if(x[i]==1&&x[i+1]==1)visibles--;
            else if(x[i]==0&&x[i+1]==0)visibles++;
            if(a[i+1]!=visibles){
                flag=0;
                break;
            }
        }
    }
    return flag;
}

int main(){
    int t;cin>>t;
    while(t--){
        vector<int>sol1,sol2;
        sol1.push_back(0);
        sol2.push_back(0);
        sol1.push_back(0);
        sol2.push_back(1);
        bool flag=1;
        int cont=0;
        int n;cin>>n;
        vector<int>arr;	
        arr.push_back(0);
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);
        }
        for(int j=1;j<n;j++){
            if(arr[j+1]-arr[j]>1){
                flag=0;
                break;
            }
            if(arr[j+1]-arr[j]==0){
                sol1.push_back(1-sol1[j]);
                sol2.push_back(1-sol2[j]);
            }else{
                sol1.push_back(sol1[j]);
                sol2.push_back(sol2[j]);
            }
        }
        if(!flag){
            cout<<0<<"\n";
            continue;
        }
        if(validar(sol1,n,arr))cont++;
        if(validar(sol2,n,arr))cont++;
        cout<<cont<<"\n";
    }
}
