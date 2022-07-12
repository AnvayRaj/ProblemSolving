#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll t,sx,sy,ex,ey,x=0,y=0,count=0;
    cin>>t>>sx>>sy>>ex>>ey;
    string d;
    cin>>d;
    for(int i=0;i<t;i++)
    {
        if(d[i]=='N' && ey>sy)
            sy++;
        if(d[i]=='S' && ey<sy)
            sy--;
        if(d[i]=='E' && ex>sx)
            sx++;
        if(d[i]=='W' && ex<sx)
            sx--;
        count++;
        if(ey==sy && ex==sx)
            break;
    }   
    if(ey==sy && ex==sx)
        cout<<count;
    else
        cout<<-1;
    return 0;
}