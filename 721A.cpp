#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,i,cnt=0,a[100],j=0,grp=0,n;
    char s[105];
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0; i<n; i++)
    {
        if(s[i]=='B')
        {
            cnt++;
        }
        else
        {
            if(cnt>0)
            {
                a[j]=cnt;
                j++;
                grp++;
            }
            cnt=0;
        }
    }
    if(cnt>0)
    {
        grp++;
        a[j]=cnt;
    }
    else
        j--;
    printf("%d\n",grp);
    if(j>=0)
    {
        for(i=0; i<j; i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[j]);
    }

    return 0;
}