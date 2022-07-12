#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n,t,pos=0;
    cin>>n>>t;
    string s,a;
    cin>>s;
    a=s;
    for(int i=0;i<t;i++)
    {
        for(int j=1;j<s.size();j++)
        {
            if(s[j]=='G' && s[j-1]=='B')
            {
                a[j]='B';
                a[j-1]='G';
            }
        }
        s=a;
    }
    cout<<s<<"\n";
    return 0;
}