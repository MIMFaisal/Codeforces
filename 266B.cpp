#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int i,n,t,j,l;
    scanf("%d %d ",&n,&t);
    char q[n+1];

    gets(q);
    l=strlen(q);
    for(i=1;i<=t;i++)
    {
        for(j=1;j<l;j++)
        {
            if(q[j-1]=='B'&&q[j]=='G')
            {
                q[j-1]='G';
                q[j]='B';
                j++;
            }

        }
    }
    puts(q);
    return 0;
}
