#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n;
    cin>>n;
    int k=0,z,flag,f2=1;
    for(int i=0;i<(2*n+1);i++)
    {
        flag=0;
        for(int j=0;j<n-k;j++)
        {
            cout<<"  ";
        }
        z=0;
        for(int j=0;j<(2*k)+1;j++)
        {
            if(j!=(2*k))
                cout<<z<<" ";
            else
                cout<<z;
            if(z==k)
            {
                flag=1;
            }
            if(flag)
                z--;
            else
                z++;

        }
        if(i==n)
        {
            f2=0;
        }
        if(f2)
            k++;
        else
            k--;
        cout<<"\n";
    }
    return 0;
}