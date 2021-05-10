#include <bits/stdc++.h>

using namespace std;

main(){
    int n;
    cin>>n;

    int knights[n] = {0};

    for(int i = 0; i < n ; i++){
        cin>>knights[i];
    }

    for(int i = 3; i <= n; i++){
        if(n%i==0){
            int ni = n / i;

            for(int j = 0; j < ni; j++)
            {
                bool flag = true;

                for (int k = j; k < n; k += ni)

                    if (!knights[k])
                    {
                        flag = false;
                        break;
                    }

                    if (flag) { printf( "YES\n" ); return 0; }
            }

        }

    }
    printf( "NO\n" );

    return 0;

}

