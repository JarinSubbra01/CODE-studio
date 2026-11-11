#include<bits/stdc++.h>
#include<numeric>
#define int long long
#define e endl
#define cn cout<<"NO"<<e
#define cy cout<<"YES"<<e
#define pb push_back
#define arrforin for(int i=0;i<n;i++){  cin>>arr[i];  }
#define vecforin for(int i=0;i<n;i++){  cin>>vec[i];  }
#define arrsort sort(arr,arr+n)
#define vecsort sort(vec.begin(),vec.end())
#define vecrev reverse(vec.begin(),vec.end())
using namespace std;
 
void solve(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int>vec(n);
        vecforin
 
        vector<int> vecsortt;
        for(int i=0;i<n;i++){
            vecsortt.pb(vec[i]);
        }
        sort(vecsortt.begin(),vecsortt.end());
        reverse(vecsortt.begin(),vecsortt.end());
        int maxx=vecsortt[0];
        int secmaxx=vecsortt[1];
 
        vector<int> vecans;
        for(int i=0;i<n;i++){
            if(vec[i]!=maxx){
                vecans.pb(vec[i]-maxx);
            }
            else{
                vecans.pb(vec[i]-secmaxx);
            }
        }
 
        for(auto x:vecans){
            cout<<x<<" ";
        }cout<<e;
 
    }
}
 
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}