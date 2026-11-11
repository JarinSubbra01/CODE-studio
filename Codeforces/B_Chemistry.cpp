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
        int a,k;
        cin>>a>>k;
        string str;
        cin>>str;
        map<char,int>mapp;
        for(auto x:str){
            mapp[x]++;
        }
        vector<int>vec;
        for(auto x:mapp){
            vec.push_back(x.second);
        }
        vecsort;

        // for(auto x:vec){
        //     cout<<x<<" ";
        // }cout<<e;


        vector<int>vecodd;
        for(int i=0;i<vec.size();i++){
            if(vec[i]%2!=0){
                vecodd.pb(vec[i]);
            }
        }

           for(int i=0;i<vecodd.size() and k>0;i++){
            vecodd[i]--;
            k--;
        }

        // vector<int>vec1;
        // for(int i=0;i<vec.size();i++){
        //     if(vec[i]>0 and k>0){
        //         vec[i]--;
        //         k--;
        //     }
        // }

   

        //   for(auto x:vec){
        //     cout<<x<<" ";
        // }cout<<e;


        //  vector<int>veccount;
        // for(int i=0;i<vec.size();i++){
        //     if(vec[i]!=0){
        //         veccount.pb(vec[i]);
        //     }
        // }
        //    for(auto x:veccount){
        //     cout<<x<<" ";
        // }cout<<e;



        int even=0,odd=0;

        for(int i=0;i<vecodd.size();i++){
            if(vecodd[i]%2!=0){
                odd++;
            }
        }

        //cout<<even<<" "<<odd<<e;

        // if(even==veccount.size() and odd==0)cy;
        // else if(odd==1 and even==veccount.size()-1)cy;
        // else cn;

        if(odd>1)cn;
        else cy;

        // vector<int>veccount;
        // for(int i=0;i<vec.size();i++){
        //     if(vec[i]!=0){
        //         veccount.pb(vec[i]);
        //     }
        // }
        
        // for(auto x:veccount){
        //     cout<<x<<" ";
        // }cout<<e<<e;

       // if(even==)
    }
}

/*14
1 0
a
2 0
ab
2 1
ba
3 1
abb
3 2
abc
6 2
bacacd
6 2
fagbza
6 2
zwaafa
7 2
taagaak
14 3
ttrraakkttoorr ----
5 3
debdb
5 4
ecadc
5 3
debca
5 3
abaac
*/

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}