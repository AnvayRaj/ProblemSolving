#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,m,a;
    cin>>n>>m>>a;
    if(n%a==0){
        n=n/a;
    }else{
        n=(n/a)+1;
    }
    if(m%a==0){
        m/=a;
    }else{
        m=(m/a)+1;
    }
    cout<<n*m<<'\n';
    return 0;
}