#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,c50=0,c25=0,x,flag=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==25)
            c25++;
        else if(x==50)
        {
            if(c25>0)
            {
                c50++;
                c25--;
            }
            else
                flag=0;
        }
        else if(x==100)
        {
            if(c50>0 && c25>0)
            {
                c50--;
                c25--;
            }
            else if(c25>2)
            {
                c25-=3;
            }
            else
                flag=0;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}