#include<bits/stdc++.h>
#define int long long
#define e endl
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sec=ceil(n/3.0)+1;
        int fir=ceil(n/3.0);
        int thi=n-(sec+fir);
        if(thi==0){
            fir=fir-1;
            thi=thi+1;
        }

        cout<<fir<<" "<<sec<<" "<<thi<<e;
    }
    return 0;
}