#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,chng=0,a[6]={0},b[6]={0},sum[6]={0};
    int flag=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        cin>>j;
        a[j]++;
    }
    for(i=0;i<n;i++){
        cin>>j;
        b[j]++;
    }
    if(n==1){
        for(i=1;i<6;i++)
        {
            if(a[i]!=b[i]){flag=0; break;}
        }
    }
    for(i=1;i<6;i++){
        sum[i]=(a[i]+b[i]);
        if(sum[i]%2!=0){flag=0; break;}
        sum[i]=sum[i]/2;
    }

    if(flag==0){
        cout<<-1<<endl;
    }
    else{
        for(i=1;i<6;i++){
                chng+=abs(a[i]-sum[i]);
        }
        cout<<chng/2<<endl;
    }
    return 0;
}
