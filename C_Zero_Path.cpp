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
        ll a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        int i=0,j=0;
        while(i<m)
        {
            j=0;
            while()
            if(j<m-1)
                if(a[i][j+1]>a[i][j+1]+a[i][j])
                    a[i][j+1]+=a[i][j];
            if(i<n-1)
                if(a[i+1][j]>a[i+1][j]+a[i][j])
                    a[i+1][j]+=a[i][j];
            
        }
        int x,y;
        for(int i=0;i<n;i++)
        {
            x=i;
            for(int j=0;j<m;j++)
            {
                cout<<a[x++][j]<<" ";
            }
        }
        for(int j=1;j<m;j++)
        {
            y=n-1;
            while(y<)

        }
    }
    return 0;
}