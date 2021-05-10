#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,r,avg,i,j,sum=0,cou=0,total,mul;

    cin>>n>>r>>avg;

    pair <long long int, long long int> a[n];
    total=n*avg;

    for(i=0;i<n;i++){
        cin>>a[i].second>>a[i].first;
        sum+=a[i].second;
    }
    sort(a,a+n);
    long long int grd;
    for(i=0;i<n;i++){
        if(total<=sum) break;
        grd=min(total-sum,r-a[i].second);
        sum+=grd;
        cou+=grd*a[i].first;
    }
    cout<<cou<<endl;
    return 0;
}
