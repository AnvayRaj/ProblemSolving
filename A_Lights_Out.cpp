#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int flipTimes(int x,int t)
{
    if(t%2==0)
        return x;
    else
        return !(x);
}
int main(){
    fast
    int b[3][3],c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    c[0][0]=b[0][0]+b[0][1]+b[1][0];
    c[0][1]=b[0][0]+b[0][1]+b[0][2]+b[1][1];
    c[0][2]=b[0][1]+b[0][2]+b[1][2];
    c[1][0]=b[0][0]+b[1][0]+b[1][1]+b[2][0];
    c[1][1]=b[0][1]+b[1][0]+b[1][1]+b[1][2]+b[2][1];
    c[1][2]=b[0][2]+b[1][1]+b[1][2]+b[2][2];
    c[2][0]=b[1][0]+b[2][0]+b[2][1];
    c[2][1]=b[1][1]+b[2][0]+b[2][1]+b[2][2];
    c[2][2]=b[1][2]+b[2][1]+b[2][2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<flipTimes(1,c[i][j]);
        }
        cout<<"\n";
    }
    return 0;
}