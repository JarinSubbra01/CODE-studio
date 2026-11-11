#include<bits/stdc++.h>
#include<numeric>
#define int long long
#define e endl
#define cn cout<<"NO"<<e
#define cy cout<<"YES"<<e
#define pb push_back
#define arrforin for(int i=0;i<n;i++){  cin>>arr[i];  }
#define vecforin for(int i=0;i<vec.size();i++){  cin>>vec[i];  }
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
        vector<int> vec;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vec.pb(x);
        }
            //vec 1 3 5 2 4 7 7
        vector<int> vecpos(1001+1,0);  //ind 1 2 3 4 5 6 7  have to check gcd here
                                       //ele 1 4 2 5 3 0 7  and will sum of these
        for(int i=0;i<n;i++){
            vecpos[vec[i]]=i+1;//i=0
            //vexpos[1] = 1
            //i=1
            //vecpos[vec[1]] = 1+1
        } 
        vector<int> vecsum;
        for(int i=1;i<=1000;i++){
            if(vecpos[i]!=0){
                for(int j=1;j<=1000;j++){
                    if(vecpos[j]!=0){
                        if(__gcd(i,j)==1){
                        vecsum.pb(vecpos[i]+vecpos[j]);
                        }
                    }
                }
            }
        }

        sort(vecsum.begin(),vecsum.end());
        reverse(vecsum.begin(),vecsum.end());

        if(vecsum.size()==0) cout<<-1<<e;
        else cout<<vecsum[0]<<e;

            

    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}