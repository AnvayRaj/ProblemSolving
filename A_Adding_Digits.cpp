#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int a,b,n,flag=0,dig;
    cin>>a>>b>>n;
    int x=a;

    for(int i=0;i<10;i++)
    {
        if((a*10+i)%b==0)
        {
            cout<<a<<i;
            flag=1;
            break;
        }
    }
    if(flag)
    {
        for(int i=0;i<n-1;i++)
        {
            cout<<0;
        }
        cout<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
    return 0;
}