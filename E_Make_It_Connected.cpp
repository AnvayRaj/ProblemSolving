#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
int merge(int* parent, int x)
{
    if (parent[x] == x)
        return x;
    return merge(parent, parent[x]);
}

vector<list<int>> connectedcomponents(int n, vector<vector<int> >& edges)
{
    vector<list<int>> v;
    int parent[n];
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
    for (auto x : edges) {
        parent[merge(parent, x[0])] = merge(parent, x[1]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (parent[i] == i);
    }
    for (int i = 0; i < n; i++) {
        parent[i] = merge(parent, parent[i]);
    }
    map<int, list<int> > m;
    for (int i = 0; i < n; i++) {
        m[parent[i]].push_back(i);
    }
    for (auto it = m.begin(); it != m.end(); it++) {
        list<int> l = it->second;
        v.push_back(l);
        for (auto x : l) {
            cout << x << " ";
        }
        cout << endl;
    }
    return v;
}

int main(){
    fast
    ll T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<string> s;
        string x;
        for(int i=0;i<n;i++){
            cin>>x;
            s.push_back(x);
        }
        vector<vector<int> > e;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<"*";
                if(s[i][j]=='1'){
                    vector<int> te = { i+1, j+1 };
                    e.push_back(te);
                }
            }
        }
        vector<list<int> > cc = connectedcomponents(n, e);
    }
    return 0;
}