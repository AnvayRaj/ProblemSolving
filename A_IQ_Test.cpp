#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    char a[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
    int ch,cd,flag=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            ch=0,cd=0;
            for(int p=i;p<i+2;p++)
            {
                for(int q=j;q<j+2;q++)
                {
                    if(a[p][q]=='#')
                        ch++;
                    else
                        cd++;
                }
            }
            if(ch<=1 || cd<=1)
                flag=1;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}