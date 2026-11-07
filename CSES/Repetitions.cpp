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
   string str;
   cin>>str;
   int count=1;
   vector<int>vec;
   for(int i=0;i<str.size()-1;i++){
    if(str[i]==str[i+1]){
        count++;
    }
    else{
        vec.pb(count);
        count=1;
    }
   }
//    int sum=0;
//    for(int i=0;i<vec.size();i++){
//     sum=sum+vec[i];
//    }
 
   vec.pb(count);
 
   int maxx=*max_element(vec.begin(),vec.end());
   cout<<maxx<<e;
 
   
   //    if(sum==str.size()){
   //    }
   //    else {
   //     cout<<str.size()-sum<<e;
   //    }
   
 
}
 
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}
