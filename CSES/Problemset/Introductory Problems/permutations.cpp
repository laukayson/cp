#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int odd[n-n/2]={0},even[n/2]={0};
    for(int i=1;i<n/2+1;i++){
        even[i-1]=i*2;
    }
    for(int i=1;i<n-n/2+1;i++){
        odd[i-1]=i*2-1;
    }
    if(n==1){
        cout<<1;
    }else if(abs(even[n/2-1]-odd[0])>1){
        for(int i=0;i<n/2;i++){
            cout<<even[i]<<' ';
        }
        for(int i=0;i<n-n/2;i++){
            cout<<odd[i]<<' ';
        }
    }else{
        cout<<"NO SOLUTION";
    }
 
    return 0;
}