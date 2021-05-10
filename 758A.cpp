#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    long long int ma=0,ar[100],sum=0;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        ma=max(ma,ar[i]);
    }
    for(i=0;i<n;i++)
    {
       sum=sum+(ma-ar[i]);
    }
    cout<<sum<<'\n';
    return 0;
}
