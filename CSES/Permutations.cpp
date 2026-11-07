#include<bits/stdc++.h>
#include<numeric>
#define int long long
#define e endl
#define cn cout<<"NO"<<e
#define cy cout<<"YES"<<e
#define pb push_back
#define arrforin for(int i=0;i<n;i++){  cin>>arr[i];  }
#define vecforin for(int i=0;i<vec.size();i++){  cin>>vec[i];  }
#define arrsort sort(arr,arr+n)
#define vecsort sort(vec.begin(),vec.end())
#define vecrev reverse(vec.begin(),vec.end())
using namespace std;
 
void solve(){
   int n;
   cin>>n;
   vector<int>veceven,vecodd;
   for(int i=1;i<=n;i=i+2){
    vecodd.pb(i);
   }
   for(int i=2;i<=n;i=i+2){
    veceven.pb(i);
   }
 
   if(n==2 or n==3)cout<<"NO SOLUTION"<<e;
 else{
   for(auto x:veceven){
    cout<<x<<" ";
   }
    for(auto x:vecodd){
    cout<<x<<" ";
   }
   cout<<e;
}
}
 
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}