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

bool steveharrington(int n){
    if(n==2)return true;
    else if(n==3)return true;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}
void solve(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        if(n%2==0)cout<<n/2<<" "<<n/2<<e;
        else if(steveharrington(n)==true)cout<<1<<" "<<n-1<<e;
        else{
            int minlcm=INT_MAX,aa=0,bb=0;
            int j=3;

        for(int i=3;i*i<=n;i=i+2){
           if(n%i==0){
                int a=i;  
                int b=n-i; 
                int lcmm1=lcm(a,b);

                int c=n/i;
                int d=n-(n/i);
                int lcmm2=lcm(c,d);

                int minn=min(lcmm1,lcmm2);

 
                if(minn<minlcm){
                    minlcm=minn;
                   if(minn==lcmm1){
                    aa=a;
                    bb=b;
                   }
                   else {
                    aa=c;
                    bb=d;
                   }
                }
                
            }
        
        }
     
             cout<<aa<<" "<<bb<<e;
         
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}