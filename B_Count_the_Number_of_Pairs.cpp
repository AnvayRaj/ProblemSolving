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
        int n,k,b=0;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        for(auto& i:m){
            if(isupper(i.first)){
                int temp=min(m[(i.first)+32],i.second);
                b+=temp;
                m[i.first+32]-=temp;
                i.second-=temp;
            }else{
                int temp=min(m[(i.first)-32],i.second);
                b+=temp;
                m[i.first-32]-=temp;
                i.second-=temp;
            }
        }
        int added=0;
        for(auto i:m){
            added+=((i.second)/2);
        }
        cout<<b+min(added,k)<<'\n';
    }
    return 0;
}