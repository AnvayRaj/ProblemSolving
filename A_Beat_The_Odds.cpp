#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int T;
    cin>>T;
    while(T--)
    {
        int n,ao=0,ae=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if((a[i]&1)==0)
                ae++;
            else
                ao++;
        }
        cout<<min(ao,ae)<<"\n";
    }
    return 0;
}