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
        ll smn=0,sm1=0;
        ll mn=-1,temp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            smn+=a[i];
        }
        for(int i=0;i<n-1;i++){
            sm1+=a[i];
            smn-=a[i];
            temp=__gcd(sm1,smn);
            if(temp>mn){
                mn=temp;
            }
        }
        cout<<mn<<'\n';
    }
    return 0;
}