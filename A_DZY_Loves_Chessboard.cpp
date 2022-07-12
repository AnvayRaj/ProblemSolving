#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,m;
    cin>>n>>m;
    char a[n][m],rs='B',cs;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        cs=rs;
        for(int j=0;j<m;j++)
        {
            if(a[i][j]!='-')
            {
                cout<<cs;
            }
            else
                cout<<'-';
            if(cs=='W')
                cs='B';
            else
                cs='W';
        }
        if(i%2==0)
            rs='W';
        else
            rs='B';
        cout<<"\n";
            
    }
    return 0;
}