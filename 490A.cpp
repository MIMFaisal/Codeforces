#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    int n,i,c1=0,c2=0,c3=0,j=0,k=0,l=0,a,x;
    scanf("%d ",&n);
    int p1[n],p2[n],p3[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a==1)
        {
            c1++;
            p1[j++]=i;
        }
        else if(a==2)
        {
            c2++;
            p2[k++]=i;
        }
        else
        {
            c3++;
            p3[l++]=i;
        }
    }
    x=min(min(c1,c2),c3);
    printf("%d\n",x);
    for(i=0;i<x;i++)
    {
        printf("%d %d %d\n",p1[i],p2[i],p3[i]);
    }

    return 0;
}
