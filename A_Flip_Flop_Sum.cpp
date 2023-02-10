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
        int a[n],f1=0,f2=0,f3=0;
        ll sm=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sm+=a[i];
        }
        for(int i=0;i<n-1;i++){
            if(a[i]==-1 && a[i+1]==-1){
                f1=1;
                // cout<<'%';
            }
            if((a[i]==-1 && a[i+1]==1) || (a[i]==1 && a[i+1]==-1)){
                f2=1;
                // cout<<'*';
            }
            if(a[i]==1 && a[i+1]==1){
                f3=1;
                // cout<<'^';
            }
        }
        if(f1==1){
            sm+=4;
        }else if(f2==1){
            //
        }else{
            sm-=4;
        }
        cout<<sm<<'\n';
    }
    return 0;
}