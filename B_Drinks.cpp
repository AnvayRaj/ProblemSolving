#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n,x;
    long double sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    cout<<fixed << setprecision(12) <<(sum)/(n);
    return 0;
}