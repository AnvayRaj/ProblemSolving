#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n,x,y;
    cin>>n;
    int a[2]={0};
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        a[0]+=x;
        a[1]+=y;
    }
    x=min(a[0],n-a[0]);
    y=min(a[1],n-a[1]);
    cout<<x+y;
    return 0;
}