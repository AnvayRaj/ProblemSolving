#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n,m,flag;
    cin>>n>>m;
    for(int i=n+1;i<50;i++)
    {
        flag=1;
        for(int j=2;j<i-1;j++)
        {
            if(i%j==0)
            {
                flag=0;
            }
        }
        if(flag)
        {
            flag=i;
            break;
        }
    }
    if(flag==m)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}