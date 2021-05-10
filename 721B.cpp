#include<bits/stdc++.h>

using namespace std;
int main()
{

        int i,j,k,n,l;
        int big=0,sml=0;
        int worst,best;
        char pass[200];

        cin>>n>>k;
        char s[n][200];

        for(i=0;i<n;i++)
        {
            scanf("%s",&s[i]);
        }

        scanf("%s",&pass);
        l=strlen(pass);

         for(i=0;i<n;i++)
         {
             if(strlen(s[i])<l)
                sml++;
             else if(strlen(s[i])>l)
                big++;
         }

         best=(sml*1)+((sml/k)*5)+1;
         worst=(n-big-1)+ (((n-big-1)/k)*5) +1;
         cout<<best<<" "<<worst;

        return 0;
}
