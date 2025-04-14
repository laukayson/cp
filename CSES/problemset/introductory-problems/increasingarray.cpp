#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n;
    ll c=0;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            c+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<c;
}