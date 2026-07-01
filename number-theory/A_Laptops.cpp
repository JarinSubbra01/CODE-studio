#include<bits/stdc++.h>
#define int long long
#define e '\n'
#define vecsort sort(vec.begin(),vec.end())
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int temp=n;
    vector<pair<int,int>> vec;
    while(temp--){
        int a,b;
        cin>>a>>b;
        vec.push_back({a,b});
    }
    vecsort;
    int check=0;
    for(int i=0;i<n-1;i++){
        if(vec[i].second>=vec[i+1].second){
            check=1;
            break;
        }
    }
 
    if(check==1)cout<<"Happy Alex"<<e;
    else cout<<"Poor Alex"<<e;
}
 
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}