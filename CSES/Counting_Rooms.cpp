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
    int a,b;
    cin>>a>>b;
   char arr[a][b];

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }

    int visited[a][b];
    memset(visited,0,sizeof visited);

    int count=0;

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(visited[i][j]==1 or arr[i][j]=='#'){
                continue;
            }
           
            queue<pair<int,int>> q;
            q.push({i,j});
            visited[i][j]=1;

            count++;

            while(!q.empty()){
               pair<int,int> p=q.front();
               q.pop();

               int x=p.first;
               int y=p.second;

                if(y-1>=0 and arr[x][y-1]=='.' and  visited[x][y-1]==0){
                    q.push({x,y-1});
                     visited[x][y-1]=1;
                }

                 if(y+1<b and arr[x][y+1]=='.' and  visited[x][y+1]==0){
                    q.push({x,y+1});
                     visited[x][y+1]=1;
                }


                  if(x-1>=0 and arr[x-1][y]=='.' and  visited[x-1][y]==0){
                    q.push({x-1,y});
                     visited[x-1][y]=1;
                }


                 if(x+1<a and arr[x+1][y]=='.' and  visited[x+1][y]==0){
                    q.push({x+1,y});
                     visited[x+1][y]=1;
                }

            }


        }
    }

    cout<<count<<e;

    //  for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         cout<<visited[i][j];
    //     }
    //     cout<<e;
    // }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   solve();
    return 0;
}