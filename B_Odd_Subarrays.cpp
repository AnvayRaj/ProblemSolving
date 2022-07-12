#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n],sa=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                sa++;
                i=i+1;
            }
        }
        cout<<sa<<"\n";
    }
    return 0;
}