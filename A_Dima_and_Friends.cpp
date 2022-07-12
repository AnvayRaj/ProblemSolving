#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n,x,w=0;
    cin>>n;
    long long int s=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s+=x;
    }
    for(int i=1;i<=5;i++)
    {
        if((s+i-1)%(n+1)!=0)
            w++;
    }
    cout<<w;
    return 0;
}