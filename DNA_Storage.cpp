#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int T;
    cin>>T;
    while(T--)
    {
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i+=2)
        {
            if(s[i]=='0')
            {
                if(s[i+1]=='0')
                    cout<<"A";
                if(s[i+1]=='1')
                    cout<<"T";
            }
            if(s[i]=='1')
            {
                if(s[i+1]=='0')
                    cout<<"C";
                if(s[i+1]=='1')
                    cout<<"G";
            }
        }
        cout<<"\n";
    }
    return 0;
}