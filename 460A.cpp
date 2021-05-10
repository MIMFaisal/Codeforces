#include <stdio.h>
#include <stdlib.h>

int main()
{
    int div,a,b,sum=0;

    scanf("%d %d",&a,&b);
    sum=a;
    while(a/b!=0)
    {
        div=a/b;
        sum=sum+div;
        a=div+(a%b);
    }
    printf("%d\n",sum);
    return 0;
}
