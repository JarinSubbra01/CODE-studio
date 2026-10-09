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
        int x,y,r;
        cin>>x>>y>>r;

        vector<int>vec;

        for(int i=-25;i<=25;i++){
            for(int j=-25;j<=25;j++){
                if((x-i)*(x-i)+(y-j)*(y-j)==r*r){
                    vec.pb(i);
                    vec.pb(j);
                    break;
                }
            }
            if(vec.size()!=0)break;
        }

        cout<<vec[0]<<" "<<vec[1]<<e;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}