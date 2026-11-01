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
        int a,b;
        cin>>a>>b;
        string str1,str2;
        cin>>str1>>str2;
       // string strr=str1+str2;

        map<char,int>mappstr1;
        for(auto x:str1){
            if(x=='s' or x=='i' or x=='x') continue;
            mappstr1[x]++;
        }
        //  for(auto x:mappstr1){
        //     cout<<x.first<<" "<<x.second<<e;
        // }

         map<char,int>mappstr2;
        for(auto x:str2){
            if(x=='s' or x=='i' or x=='x') continue;
            mappstr2[x]++;
        }
        //  for(auto x:mappstr2){
        //     cout<<x.first<<" "<<x.second<<e;
        // }

        vector<char>veccc;

        for(auto [ch,num] : mappstr1){
           //cout<<ch<<e;
                 if(mappstr2[ch]==num){
                    continue;
            }
            else{
                veccc.pb('1');

            }
         
        }

        //    for(auto x:mappstr2){
        //     cout<<x.first<<" "<<x.second<<e;
        // }

         for(auto [ch,num] : mappstr2){
           //  cout<<ch<<e;
                 if(mappstr1[ch]==num){
                    continue;
            }
            else if(mappstr2[ch]!=0){
              //  cout<<0<<e;
                veccc.pb('1');

            }
         
        }

        // for(auto x:veccc){
        //     cout<<x<<" ";
        // }cout<<e;


         int s1s=0,s1i=0,s1x=0,s2s=0,s2i=0,s2x=0;
 
        for(int i=0;i<a;i++){
            if(str1[i]=='s')s1s++;
            else if(str1[i]=='i')s1i++;
            else if(str1[i]=='x')s1x++;
        }
 
          for(int i=0;i<b;i++){
            if(str2[i]=='s')s2s++;
            else if(str2[i]=='i')s2i++;
            else if(str2[i]=='x')s2x++;
        }

        if(s1s>s2s and s1s-s2s==1 and s1i>s2i and s1i-s2i==1 and s1x>s2x and s1x-s2x==1 and veccc.size()==0)cy;
        else cn;

        


    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}