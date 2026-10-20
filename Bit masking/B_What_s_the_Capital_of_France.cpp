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
        int n;
        cin>>n;
        int maxx=INT_MIN;
        int minn=INT_MAX;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            maxx=max(maxx,x);
            minn=min(minn,x);
        }

        if(minn==maxx)cout<<minn<<e;
        else{
        int xorr=minn xor maxx;

        int posfor= 31-__builtin_clz(xorr);

        int num=(1<<posfor)-1;

        int ans= num | maxx;

        cout<<ans<<e;
        }

    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}