#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2!=0){
            n=n*3+1;
            cout<<n<<" ";
        }else{
            n/=2;
            cout<<n<<" ";
        }
    }
    return 0;
}