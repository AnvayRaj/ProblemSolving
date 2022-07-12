#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n,a,b;
    cin>>n;
    long long int p=0,mp=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        p-=a;
        cin>>b;
        p+=b;
        if(p>mp)
        {
            mp=p;
        }
    }
    cout<<mp;
    return 0;
}