#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i,l,n;
    char a[101];

    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        gets(a);
        l=strlen(a);
        if(l<=10)
            puts(a);
        else
            printf("%c%d%c",a[0],l-2,a[l-1]);
    }
    return 0;
}
