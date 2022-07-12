#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n;
    cin>>n;
    int a[n],max=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}