#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int T;
    cin>>T;
    while(T--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a + 3);
        int x,y;
        x=a[2]-a[1];
        y=a[2]-a[0];
        if(((x&y)==0)&&((x+y)==(pow(2,__builtin_popcount(x+y))-1)))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}