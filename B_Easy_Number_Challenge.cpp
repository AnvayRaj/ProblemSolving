#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
int main(){
    fast
    ll a,b,c;
    cin>>a>>b>>c;
    bool hash[a*b*c + 1];
    memset(hash, true, sizeof(hash));
    for (int p = 2; p * p < a*b*c; p++)
        if (hash[p] == true)
            for (int i = p * 2; i < a*b*c; i += p)
                hash[i] = false;
    ll d[(a*b*c)+1];
    for(int i=1;i<=a*b*c;i++)
    {
        ll total=1;
        for (int p = 2; p <=i; p++) {
            if (hash[p]) {
                int count = 0;
                if (i % p == 0) {
                    while (i % p == 0) {
                        i = i / p;
                        count++;
                    }
                    total = total * (count + 1);
                }
            }
        }
        d[i]=total;
    }
    ll sum=0,num;
    for(int x=1;x<=a;x++)
    {
        for(int y=1;y<=b;y++)
        {
            for(int z=1;z<=c;z++)
            {
                num=x*y*z;
                sum=((sum%1073741824)+(d[num]%1073741824))%1073741824;
            }
        }
    }
    cout<<sum;
    return 0;
}