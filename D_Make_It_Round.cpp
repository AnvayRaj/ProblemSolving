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
        ll n,m;
        cin>>n>>m;
        int tn=n;
        int n2=0,n5=0;
        while(tn>0 && tn%2==0){
            n2++;
            tn/=2;
        }
        tn=n;
        while(tn>0 && tn%5==0){
            n5++;
            tn/=5;
        }
        ll mx,x=floor(log10(m)+1);
        x--;
        if(x!=0)
            mx=m/(pow(10,x));
        cout<<mx<<'\n';
    }
    return 0;
}