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
        string str;
        cin>>str;
        vector<int>vec;
        int count=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='1'){
                count++;
                vec.pb(i+1);

            }
        }

        vecsort;

        if(vec.size()==1)cout<<0<<e;
        else if(vec.size()==2)cout<<1<<e;
        else cout<<vec[vec.size()-1]-vec[0]<<e;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}