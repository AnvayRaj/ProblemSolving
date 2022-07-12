#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int a[4],c=0;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    if(a[0]==a[1])
        c++;
    if(a[1]==a[2])
        c++;
    if(a[2]==a[3])
        c++;
    cout<<c;
    return 0;
}