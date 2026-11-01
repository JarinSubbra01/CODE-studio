#include<bits/stdc++.h>
#define int long long
#define e endl
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        
        int a,b;
        cin>>a>>b;
        int maxx=max(a,b);
        int minn=min(a,b);

        int step=ceil((maxx-minn)/10.0);

        cout<<step<<e;
        
    }
}