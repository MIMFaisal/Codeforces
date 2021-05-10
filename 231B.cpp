#include <bits/stdc++.h>

using namespace std;

main(){
    int n, d, l, a[101],i;

    cin>> n >> d >> l;

    int oddsum, evensum;

    for(i = 1; i <= n; i++)
        a[i] = 1;

    evensum = n / 2;
    oddsum = n - evensum;

    if( d > 0) i = 1;
    else if(d < 0) i = 2;
    else if(d == 0 && n % 2 == 1) i = n-1;

    for( ; i <= n; i += 2)
    {
        if((oddsum-evensum)==d) break;

        while(a[i]<l && (oddsum-evensum)!=d)
        {
            a[i]++;
            if(i%2) oddsum++;
            else evensum++;
        }
    }
    if(oddsum-evensum!=d)
    {
        cout<< -1 <<"\n"; return 0;
    }

    for(i = 1; i < n; i++) printf("%d ",a[i]);
    printf("%d\n",a[i]);

    return 0;
}
