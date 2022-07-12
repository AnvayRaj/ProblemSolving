#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    if(n==1)
    {
        cout<<0;
    }
    else
    {    for(int i=1;i<n;i++)
            if(s[i]==s[i-1])
                count++;
    cout<<count;}

    return 0;
}