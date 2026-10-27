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
 
vector<int> powertwo;//1 2 4 8 16 32 64 
void calculatepowertwo(){
    for(int i=0;i<=30;i++){
        powertwo.pb(pow(2,i));
    }
}
 
void solve(){
  calculatepowertwo();
  int n;
  cin>>n;
  vector<int> vec;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    vec.pb(x);
  }
 vector<int>vecminus; //0 1 3 7 15   //0,0 1,0 3,0 7,0 15,0
  map<int,int> mapp; //0,0 1,3 3,0 7,0 15,0
  int ans=0;
  vector<int> vecsum;
  for(int i=0;i<n;i++){ 
    for(int j=0;j<powertwo.size();j++){
       vecminus.pb(powertwo[j]-vec[i]);
    }
    for(auto x:vecminus){
        if(mapp[x]>0){ //ans=ans+mapp[x];//1 3
            vecsum.pb(mapp[x]);
        }
    }
    vecminus.clear();
    mapp[vec[i]]++;//1 2 3
 
  }
//cout<<vec[0]; ->7
//cout<<mapp[7]; ->1
//vec[0]++ -> 8
//mapp[7]++ -> 2
//   for(auto x: vecminus){
//     cout<<x<<" ";
//   }
 
  //cout<<vecminus.size()<<e;
 // cout<<ans<<e;
int sum=0;
 for(auto x:vecsum){
    sum=sum+x;
 }
 
 cout<<sum<<e;
 
}
 
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}