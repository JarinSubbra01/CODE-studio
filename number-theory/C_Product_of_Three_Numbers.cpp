/*
problem- C. Product of Three Numbers
platform- Codeforces
Link- https://codeforces.com/problemset/problem/1294/C
*/

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
 
    int temp=n;
    vector<int> divisors;
 
    for(int i=2;i*i<=temp;i++){
        if(temp%i==0){
            divisors.push_back(i);
            if(i!=temp/i){
                divisors.push_back(temp/i);
            }
        }
    }
    divisors.pb(n);
    sort(divisors.begin(),divisors.end());
    set<int> sett;
 
    for(auto x:divisors){
        sett.insert(x);
    }
 
    vector<int>vecagain;
    for(auto x:sett){
        vecagain.pb(x);
    }
 
    int vecsize=vecagain.size();
 
    if(vecsize==0 or vecsize<3)cn;
    else{
 
        int found=0;
 
    for(int i=0;i<vecsize;i++){
        for(int j=i+1;j<vecsize;j++){
            int mul=vecagain[i]*vecagain[j];
 
            if(n%mul!=0){
                continue;
            }
 
            int leftout=n/mul;
 
            if(leftout==vecagain[i] || leftout==vecagain[j]){
                continue;
            }
 
            if(sett.find(leftout)!=sett.end()){
                cout<<"YES"<<e;
                cout<<vecagain[i]<<" "<<vecagain[j]<<" "<<leftout<<e;
 
                found=1;
                break;
            }
        }
 
        if(found){
            break;
        }
    }
 
    if(found==0){
        cout<<"NO"<<e;
    }
 
    }
}
    }
 
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}