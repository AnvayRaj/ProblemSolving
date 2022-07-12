#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,c1=0,c2=0,c3=0,c4=0,c6=0,x,flag=0;
    cin>>n;
    ll fours=0,sixes=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==1)
            c1++;
        else if(x==2)
            c2++;
        else if(x==3)
            c3++;
        else if(x==4)
            c4++;
        else if(x==6)
            c6++;
        else
            flag=1;
    }
    if(c4<=c2 && c4!=0)
    {
        fours=c4;
        c2-=c4;
    }
    if(c6==(c2+c3) && c6!=0)
    {
        sixes=c6;
    }
    else
    {
        flag=1;
    }
    if(c1!=(fours+sixes))
        flag=1;
    if(flag)
        cout<<-1;
    else
    {
        for(int i=0;i<fours;i++)
            cout<<"1 2 4\n";
        for(int i=0;i<c2;i++)
            cout<<"1 2 6\n";
        for(int i=0;i<c3;i++)
            cout<<"1 3 6\n";
    }
    return 0;
}