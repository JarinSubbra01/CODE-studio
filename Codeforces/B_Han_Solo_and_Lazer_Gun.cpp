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
// slope= (y2-y1)/(x2-x1)
/*  x= jodi main ta hoi mane x1=x0  y1=y0
*/
void solve(){
  int n;
  cin>>n;
  int x0,y0;
  cin>>x0>>y0;
 // int count=0;
 // vector<pair<int,int>> vec;
  set<pair<int,int>> vecminus;
 
  vector<double>vecvag;
  while(n--){
    int a,b;
    cin>>a>>b;
   // vec.pb({a,b});
 
    // if(a-x0==0){
    //     count++;
    // }
    int yy,xx;
    yy=(b-y0);
    xx=(a-x0);
 
    // if(xx==0){
    //     xx=1;
    // }
 
 
    // if(b>=y0)  yy=(b-y0);
    // else if(b<y0)  yy=(y0-b);
    // if(a>=x0) xx=(a-x0);
    // else if(a<x0) xx=(x0-a);
 
 
   //else if(a-x0!=0){
    //vecminus.push_back({(b-y0,a-x0)});
   // }
 
   int gcd=__gcd(xx,yy);
   vecminus.insert({yy/gcd,xx/gcd});
 
 
//    vecminus.pb({yy,xx});
 
//    vecvag.pb((yy*1.0)/(xx*1.0));
 
  }
//     map<double,int> mapp;
//   for(auto x:vecvag){
//     mapp[x]++;
//   }
//   cout<<mapp.size()<<e;
 
cout<<vecminus.size()<<e;
  
 
//   map<int,int> mapp;
//   for(auto [x,y]:vecminus){
//     mapp[x,y]++;
//   }
//   cout<<mapp.size()<<e;
 
//   for(auto x:vecminus){
//     cout<<x<<" ";
//   }cout<<e;
}
 
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}