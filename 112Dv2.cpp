#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>G[10005], go[10005];
    int n, a[10005], b[10005], siz[10005];
    int i, j, u, v, k;

    for(i = 1; i <= 100000; i++) {
        G[i].clear();
        j = sqrt((double)i);
        for(u = 1; u <= j; u++) if(i%u==0){
            G[i].push_back(u);
            if(u != (i/u))G[i].push_back(i/u);
        }
    }
    cin>>n;

    for(i = 1; i <= n; i++)
    {
        cin>>a[i]>>b[i];
        for(j = 0; j < G[a[i]].size(); j++)
        {
            go[G[a[i]][j]].push_back(i);
        }
    }

    for(i = 1; i <= n; i++)
    {
        if(b[i] == 0) { cout<<G[a[i]].size();continue;}
        int ans = G[a[i]].size();
        for(j = 0; j < G[a[i]].size(); j++) {
            int l = i-b[i], r = i-1;
            l = lower_bound(go[G[a[i]][j]].begin(), go[G[a[i]][j]].end(), l) - go[G[a[i]][j]].begin();
            r = upper_bound(go[G[a[i]][j]].begin(), go[G[a[i]][j]].end(), r) - go[G[a[i]][j]].begin() -1;
            if(r - l +1 >0)ans--;
        }
        cout<<ans;
    }
    return 0;
}
