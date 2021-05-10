#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,j;
    int oc[10]={0,0,0,0,0,0,0,0,0,0};
    char a[5],b[5],c[5],d[5];

    scanf(" %d ",&k);
    k=k*2;
    gets(a);
    gets(b);
    gets(c);
    gets(d);

    for(i=0;i<4;i++)
    {
        if(a[i]=='.') continue;
        j=a[i]-'0';
        oc[j]++;
    }
    for(i=0;i<4;i++)
    {
        if(b[i]=='.') continue;
        j=b[i]-'0';
        oc[j]++;
    }
    for(i=0;i<4;i++)
    {
        if(c[i]=='.') continue;
        j=c[i]-'0';
        oc[j]++;
    }
    for(i=0;i<4;i++)
    {
        if(d[i]=='.') continue;
        j=d[i]-'0';
        oc[j]++;
    }
    for(i=1;i<10;i++)
    {
        if(oc[i]>k){
            printf("NO\n");
            break;
        }
    }
    if(i==10)
        printf("YES\n");
    return 0;
}
