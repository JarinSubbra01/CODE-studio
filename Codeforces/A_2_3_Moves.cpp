#include<bits/stdc++.h>
#define int long long
#define e endl
using namespace std;
 
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        if(n==1){
         cout<<2<<e; 
    }
    
        else{
            if(n%3==0){
                  cout<<n/3<<e; 
            }
 
            else{ 
            cout<<(n/3)+1<<e;
            }
    }
 
    
}
}