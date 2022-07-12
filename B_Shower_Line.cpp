#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll b[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cin>>b[i][j];
    }
    ll a[]={0,1,2,3,4},mx=0,csum;
    do{
        csum=(b[a[0]][a[1]]+b[a[1]][a[0]]+b[a[2]][a[3]]+b[a[3]][a[2]])+(b[a[1]][a[2]]+b[a[2]][a[1]]+b[a[3]][a[4]]+b[a[4]][a[3]])+(b[a[2]][a[3]]+b[a[3]][a[2]])+(b[a[3]][a[4]]+b[a[4]][a[3]]);
        if(csum>mx)
            mx=csum;
    } while (next_permutation(a,a+5));
    cout<<mx;
    return 0;
}