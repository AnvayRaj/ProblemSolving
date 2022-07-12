#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
        int n;
        cin>>n;
        int a[n],mx=-1,mi=101,count=0,flag=1,t;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>mx)
                mx=a[i];
            if(a[i]<mi)
                mi=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==mx)
            {
                t=i;
                break;
            }
        }
        while(t>0)
        {
            flag=a[t];
            a[t]=a[t-1];
            a[t-1]=flag;
            count++;
            t--;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==mi)
            {
                t=i;
                break;
            }
        }
        while(t<n-1)
        {
            flag=a[t];
            a[t]=a[t+1];
            a[t+1]=flag;
            count++;
            t++;
        }
        cout<<count;
    return 0;
}