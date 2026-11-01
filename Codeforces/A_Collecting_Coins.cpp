#include<bits/stdc++.h>
#define int long long
#define e endl
using namespace std;
 
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int maxx=max({a,b,c});
        int need=abs(maxx-a)+abs(maxx-b)+abs(maxx-c);
 
        if(need<=n && (n-need)%3==0){
            cout<<"YES"<<e;
        }
        else{
            cout<<"NO"<<e;
        }
    }
    return 0;
}