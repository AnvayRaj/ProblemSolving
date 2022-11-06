#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,l,flag1=1,flag2=1;
    cin>>n>>l;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            flag1=0;
        }
        if(a[i]==l){
            flag2=0;
        }
    }

    sort(a,a+n);
    double ans=0;
    for(int i=1;i<n;i++){
        if((double(a[i]-a[i-1]))/2>ans){
            ans=(double(a[i]-a[i-1]))/2;
        }
    }
    if(flag1){
        // cout<<'*';
        if(ans<(double(a[0]))){
            ans=(double(a[0]));
        }
    }
    if(flag2){
        //  cout<<'*';
        if(ans<(double(l-a[n-1]))){
            ans=(double(l-a[n-1]));
        }
    }
    cout<<fixed<<setprecision(10)<<ans<<'\n';
    return 0;
}