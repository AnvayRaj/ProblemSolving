#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n,x,amc=0;
    cin>>n;
    int mx,mi;
    cin>>mx;
    mi=mx;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        if(x>mx)
        {
            mx=x;
            amc++;
        }
        if(x<mi)
        {
            mi=x;
            amc++;
        }
    }
    cout<<amc;
    return 0;
}