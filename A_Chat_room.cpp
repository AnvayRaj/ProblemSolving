#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    string s,h="hello";
    int k=0;;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==h[k])
        {
            k++;
            if(k==5)
                cout<<"YES\n";
        }
    }
    if(k!=5)
        cout<<"NO\n";
    return 0;
}