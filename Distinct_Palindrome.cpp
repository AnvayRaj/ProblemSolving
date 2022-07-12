#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int T;
    cin>>T;
    while(T--)
    {
        int n,x;
        cin>>n>>x;
        string s="abcdefghijklmnopqrstuvwxyz";
        if(n==1)
        {
            cout<<"a\n";
        }
        else
        {
            if(n%2==0)
            {
                if(x<=(n/2))
                {
                    int mid=n/2;
                    int i;
                    for(i=0;i<x;i++)
                    {
                        cout<<s[i];
                    }
                    for(int j=0;j<2*(mid-x);j++)
                    {
                        cout<<s[i-1];
                    }
                    for(i=x-1;i>=0;i--)
                    {
                        cout<<s[i];
                    }
                    cout<<"\n";
                }
                else
                    cout<<-1<<"\n";
                
            }
            else
            {
                if(x<=(n/2)+1)
                {
                    int mid=n/2;
                    int i;
                    for(i=0;i<x-1;i++)
                    {
                        cout<<s[i];
                    }
                    char c=s[i];
                    for(int i=0;i<n-(2*(x-1));i++)
                        cout<<c;
                    for(i=x-2;i>=0;i--)
                    {
                        cout<<s[i];
                    }
                    cout<<"\n";
                }
                else
                    cout<<-1<<"\n";
            }
        }
    }
    return 0;
}