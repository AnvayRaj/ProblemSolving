#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int T;
    cin>>T;
    while(T--)
    {
        int n,flag=1;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long int b[n];
        if(n%2==0)
        {
            for(int i=0;i<n;i++)
            {
                
            }
        }
        else
        {  
            cout<<"NO\n";
        }
    }
    return 0;
}