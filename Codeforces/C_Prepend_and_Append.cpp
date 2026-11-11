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
        vector<int>ans;
        int summ=0;
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if((str[i]=='0' and str[n-1-i]=='0')or(str[i]=='1' and str[n-1-i]=='1')){
                // ans.pb(vec[i]);
                // ans.pb(vec[n-i]);
                // n=n-2; 
                summ=summ+2;

                a=i;
                b=n-1-i;
                break;
            }
        }
        //cout<<a<<" "<<b<<e;
        if(n==1)cout<<1<<e;
        else if(a==0 and b==0 )cout<<0<<e;

        else cout<<abs(a-b)+1<<e;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}