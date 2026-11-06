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
        int a;
        cin>>a;
        int ans=0;
        if(a%2==1){
            int h1=a/2;
            int h2=a-h1;

            if(h1%2==0){
                ans=(0.5*h1)*h2*2;
                cout<<ans<<e;
            }
            else if(h2%2==0){
                 ans=(0.5*h2)*h1*2;
                cout<<ans<<e;

            }

        }
        else{
            int hlf=a/2;

            cout<<hlf*hlf<<e;
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}