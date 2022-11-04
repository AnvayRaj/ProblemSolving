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
        // cout<<n<<'*';
        int x=2,y=3*n;
        if(n&1){
            cout<<ceil(float(n)/2)<<'\n';
            
        }
        else{
            cout<<n/2<<'\n';
        }
        while(x<y){
            cout<<x<<' '<<y<<'\n';
            x+=3;
            y-=3;
        }
        
    }
    return 0;
}