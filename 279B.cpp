#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    long long int i,n,t,sum=0;
    scanf("%I64d %I64d ",&n,&t);
    long long int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
    }

    sort(a,a+n);

    for(i=0;sum<=t;i++)
    {
        sum+=a[i];
    }
    if(sum==t)
            printf("%I64d\n",i);
    else if(sum>t)
            printf("%I64d\n",i-1);
    return 0;
}
