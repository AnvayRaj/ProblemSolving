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
        string s;
        cin>>s;
        ll c1=0,c2=0,l1=0,l2=0,x=0,y=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                c1++;
                x++;
                y=0;
                if(x>l1){
                    l1=x;
                }
            }
            if(s[i]=='1'){
                c2++;
                y++;
                x=0;
                if(y>l2){
                    l2=y;
                }
            }
        }
        ll cx=c1*c2;
        ll cy=l1*l1;
        ll cz=l2*l2;
        ll ans;
        if(cx>=cy){
            if(cx>=cz){
                ans=cx;
            }else{
                ans=cz;
            }
        }else{
            if(cy>=cz){
                ans=cy;
            }else{
                ans=cz;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}