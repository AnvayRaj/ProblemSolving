#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

typedef struct point{
    int x,y;
}point;
int main(){
    fast
    ll n,l,r,u,d,count=0;
    cin>>n;
    point a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    for(int i=0;i<n;i++)
    {
        l=0;r=0;u=0;d=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[j].x==a[i].x && a[j].y>a[i].y)
                    u++;
                if(a[j].x==a[i].x && a[j].y<a[i].y)
                    d++;
                if(a[j].x>a[i].x && a[j].y==a[i].y)
                    l++;
                if(a[j].x<a[i].x && a[j].y==a[i].y)
                    r++;
            }
        }
        if(u>0 && d>0 && l>0 && r>0)
            count++;
    }
    cout<<count;
    return 0;
}