#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n];
        int flag=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) flag=0;
        }
        int f0=-1,x=0,save=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                x++;
            }
            if(a[i]==0 && f0==-1){
                f0=i;
                x=i;
                save=x;
                continue;
            }
            if(a[i]==0){
                v.push_back(x);
            }
        }
        ll sm=0;
        for(int i=0;i<v.size();i++){
            sm+=v[i];
        }
        if(flag){
            sm=n-1;
        }else if(n==1){
            sm=0;
        }else{
            if(a[n-1]==1){
                sm=sm+save+x-1;
            }else{
                sm+=v.size();
            }
            
        }
        cout<<sm<<'\n';
    }
    return 0;
}