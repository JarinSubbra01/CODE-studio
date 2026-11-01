#include<bits/stdc++.h>
#define int long long
#define e endl
using namespace std;
 
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
 
        if(a==b && b==a && a==c){
            cout<<1<<" "<<1<<" "<<1<<e;
        }
        else if((a==b && a>c) ){
            cout<<1<<" "<<1<<" "<<abs(a-c)+1<<e;
        }
         else if((b==c && b>a) ){
            cout<<abs(a-b)+1<<" "<<1<<" "<<1<<e;
        }
         else if((a==c && a>b) ){
            cout<<1<<" "<<abs(a-b)+1<<" "<<1<<e;
        }
        else if(a>b && a>c){
            cout<<0<<" "<<abs(a-b)+1<<" "<<abs(a-c)+1<<e;
        }
         else if(b>a && b>c){
            cout<<abs(a-b)+1<<" "<<0<<" "<<abs(b-c)+1<<e;
        }
        else {
             cout<<abs(a-c)+1<<" "<<abs(b-c)+1<<" "<<0<<e;
        }
 
    }
 
}