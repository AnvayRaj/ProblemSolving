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
        ll a,b,n,x=1,flag=1;
        string sa,sb;
        cin>>a>>b>>n;
        if(a==b)
            cout<<0<<"\n";
        else{
            x=1;
            x=x<<(int(ceil(log2(n))));
            x=x-1;
            if((a^b)>x)
            {
                cout<<-1<<"\n";
            }
            else
            {
                // cout<<(a^b)<<" *"<<x<<"\n";
                if((a^b)<n)
                    cout<<1<<"\n";
                else
                    cout<<2<<"\n";
            }
            // cout<<sa<<'\n';
            // cout<<sb<<'\n';
            // cout<<x<<"\n";
        }
    }
    return 0;
}