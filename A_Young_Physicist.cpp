#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int T;
    cin>>T;
    int a[3]={0},x,y,z;
    for(int i=0;i<T;i++)
    {
        cin>>x>>y>>z;
        a[0]+=x;
        a[1]+=y;
        a[2]+=z;
    }
    if(a[0]==0 && a[1]==0 && a[2]==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}