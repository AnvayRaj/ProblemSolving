#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n,sum=0,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        if((a+b+c)>=2)
            sum++;
    }
    cout<<sum<<"\n";
    return 0;
}