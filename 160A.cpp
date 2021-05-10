#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int i,n,sum,sc=0;
    scanf("%d ",&n);
    int cvl[n];
    sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&cvl[i]);
        sum+=cvl[i];
    }
    sort(cvl,cvl+n);

    for(i=n-1;i>=0;i--)
    {
        sc+=cvl[i];
        if(sc>(sum-sc)){
            printf("%d\n",n-i);
            break;
        }
    }


    return 0;
}
