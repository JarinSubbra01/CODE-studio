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
    int n;  // input vec
    cin>>n;
    vector<int>vec(n);
    vecforin

    vector<int>vec1;  // sorted vec for comparing
    for(int i=0;i<n;i++){
        vec1.pb(vec[i]);
    }
    sort(vec1.begin(),vec1.end());

     if(vec==vec1){
        cout<<"yes"<<e;
        cout<<1<<" "<<1<<e;
        return;
    }
    
    vector<int>vecans;
    for(int i=0;i<n;i++){
        if(vec[i]!=vec1[i]){
            vecans.pb(i+1);

        }
    }

    // for(int i=0;i<vecans.size();i++){
    //     cout<<vecans[i]<<e;
    // }

    reverse(vec.begin()+vecans[0]-1,vec.begin()+vecans[vecans.size()-1]);

    if(vec==vec1){
        cout<<"yes"<<e;
        cout<<vecans[0]<<" "<<vecans[vecans.size()-1]<<e;
    }
    else{
        cout<<"no"<<e;
    }

   /* int count=0;
    sort(vecans.begin(),vecans.end());
    for(int i=0;i<vecans.size();i++){
        if(vecans[i]+1!=vecans[i+1]){
            count++;
        }
    }

    if(count==0){
        cout<<"yes"<<e;
    }
    else{
        cout<<"no"<<e;
    }*/


}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}