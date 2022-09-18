#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
int main(){
    fast
    ll T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        ll s=0;
        ll a[n],c1=0,c0=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
                c0++;
            else
                c1++;
        }
        s=(-454-(110*c1)+(358*n))/7;
        // ll m=max(c0,c1);
        // sort(a, a + n);
	    // reverse(a, a + n);
        // do {
        //     ll c=0;
        //     for(int i=0;i<n;i++)
        //     {
        //         if(a[i]==1)
        //             c++;
        //         if(a[i]==0)
        //         {
        //             s=s+((c*(c+1))/2);
        //             c=0;
        //         }
        //         if(i==(n-1) && a[i]==1)
        //         {
        //             s=s+((c*(c+1))/2);
        //         }
        //     }
        //     // cout<<s<<" ";
	    // } while (prev_permutation(a,a+n));
        cout<<s<<"\n";
    }
    return 0;
}