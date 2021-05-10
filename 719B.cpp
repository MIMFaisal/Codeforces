#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long int i,n,ca=0,cb=0;
    scanf("%d\n",&n);
    char crch[n+1];
    gets(crch);

    char refa[n+1],refb[n+1];
    refa[0]='r';
    refb[0]='b';
    refa[n]='\0';
    refb[n]='\0';
    for(i=1;i<n;i++)
    {
        if(refa[i-1]=='r'&&refb[i-1]=='b')
        {
            refa[i]='b';
            refb[i]='r';
        }
        else
        {
            refa[i]='r';
            refb[i]='b';
        }
    }
    for(i=0;i<n;i++)
    {
        if(crch[i]!=refa[i])
        {
            ca++;

        }
    }
    return 0;
}
