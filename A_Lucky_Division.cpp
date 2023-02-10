#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    int ref[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    ll n;
    cin>>n;
    int z=sizeof(ref)/sizeof(int);
    int flag=0;
    for(int i=0;i<z;i++){
        if(n%ref[i]==0){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}