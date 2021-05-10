#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n,c=1,i,d;
    scanf("%I64d %I64d",&n,&d);
    long long int t[n];

    scanf("%I64d",&t[0]);

    for(i=1;i<n;i++)
    {
        scanf("%I64d",&t[i]);
        if((t[i]-t[i-1])>d)
            c=1;
        else
            c++;
    }
    printf("%I64d\n",c);

    return 0;
}
