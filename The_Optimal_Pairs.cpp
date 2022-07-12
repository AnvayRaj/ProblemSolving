#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int T;
    cin>>T;
    while(T--)
    {
        int n,g,l;
        cin>>n;
        int op=__gcd(1,n-1)+((n-1)/__gcd(1,n-1)),count=0;
        if(n%2==0)
        {
            for(int i=1;i<=n/2-1;i++)
            {
                if(op==__gcd(i,n-i)+(((n-i)*i)/__gcd(i,n-i)))
                    count++;
            }
            count*=2;
            count++;
            cout<<count<<"\n";
        }
        else
        {
            for(int i=1;i<=n/2;i++)
            {
                if(op==__gcd(i,n-i)+(((n-i)*i)/__gcd(i,n-i)))
                    count++;
            }
            count*=2;
            cout<<count<<"\n";
        }
    }
    return 0;
}