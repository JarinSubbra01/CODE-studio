#include<bits/stdc++.h>
#include<numeric>
#define int long long
#define e '\n'
#define cn cout<<"NO"<<e
#define cy cout<<"YES"<<e
#define pb push_back
#define vecc vector<int>vec(n)
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
        int r,s,p;
        cin>>r>>s>>p;

        int maxx=max({r,s,p});

        if(maxx==r){
            for(int i=1;i<=r+s+p;i++){
                cout<<"P";
            }
        }
        else  if(maxx==s){
            for(int i=1;i<=r+s+p;i++){
                cout<<"R";
            }
        }
        else{
            for(int i=1;i<=r+s+p;i++){
                cout<<"S";
            }
        }
        cout<<e;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}