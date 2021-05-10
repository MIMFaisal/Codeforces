#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,j,i,p,k,x,lindx=1,chk,e=1;
    vector<int> co;
    cin>>n>>k;
    for(i=0;i<k;i++){
        cin>>x;
        co.push_back(x);
    }
    vector<int> v;
    vector<int> elm;

    for(i=0;i<k;i++){
        v.clear();
        v.push_back(0);
        for(j=1;j<n+1;j++){
                chk=0;
            for(p=0;p<elm.size();p++){
                if(j==elm[p]){ chk = 1; break;}
            }
            if(chk==0) v.push_back(j);
        }

    if(lindx+co[i]>(v.size()-1)) e=(lindx+co[i])%(v.size()-1);
    else e=lindx+co[i];
    if(e==0) e=v.size()-1;
    elm.push_back(v[e]);
    if(e==(v.size()-1)) lindx=1;
    else lindx=e;
    }
    for(i=0;i<k-1;i++){
        cout<<elm[i]<<" ";
    }
    cout<<elm[i]<<endl;

    return 0;
}
