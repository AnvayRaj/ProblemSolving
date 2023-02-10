#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n;
    cin>>n;
    if(n<0){
        n*=-1;
        int l=(n%10);
        int sl=(n%100);
        sl/=10;
        n/=100;
        n*=-10;
        if(l<sl){
            n-=l;
        }else{
            n-=sl;
        }
        cout<<n;
    }else{
        cout<<n;
    }
    return 0;
}