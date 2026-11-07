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
   vector<int>vec;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    vec.pb(x);
   }
   int sum=0;
   for(int i=0;i<n-1;i++){
    if(vec[i]>vec[i+1]){
        sum=sum+(vec[i]-vec[i+1]);
        vec[i+1]=vec[i];
    }
   }
   cout<<sum<<e;
}
 
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}
