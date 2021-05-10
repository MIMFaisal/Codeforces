#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i,j;
    scanf("%d %d ",&m,&n);

    string a[n],b[n];
    string mi[n];
    for(i=0;i<n;i++){
        cin>> a[i];
        cin>> b[i];
    if(a[i].size()>b[i].size())
        mi[i]=b[i];
    else
        mi[i]=a[i];
    }
    string s[m],sout[m];

    for(i=0;i<m;i++)
    {
        cin>>s[i];
        for(j=0;j<n;j++){
            if(s[i]==a[j]){
                sout[i]=mi[j]; break;
            }
        }
    }
    m--;
    for(i=0;i<m;i++){
        cout<<sout[i]<<" ";
    }
    cout<<sout[m]<<"\n";

}
