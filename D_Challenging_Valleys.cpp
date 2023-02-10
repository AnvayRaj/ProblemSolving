#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int flag1=1,flag2=1,x1=0,x2=n-1,flag3=1;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                flag1=0;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]!=b[n-i-1]){
                flag2=0;
                break;
            }
        }
        int i;
        for(i=1;i<n;i++){
            if(a[i]<=a[i-1]) x1=i;
            else break;
        }
        // for(i=x1+1;i<n;i++){
        //     if(a[i]==a[i-1]) x1=i;
        //     else break;
        // }
        for(i=x1+1;i<n;i++){
            if(a[i]>=a[i-1]) x1=i;
            else break;
        }
        if(x1!=n-1) flag3=0;
        if(flag1==1 || flag2==1 || flag3==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}