#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,m;
    cin>>n>>m;
        if(m>n){
            cout<<-1;
        }else{
            int c=(n%2==0)?(n/2):1+(n/2),flag=0;
            while(c<=n){
                if(c%m==0){
                    cout<<c;
                    flag=1;
                    break;
                }
                c++;
            }
            if(flag==0){
                cout<<-1;
            }
        }
    return 0;
}