#include <bits/stdc++.h>

using namespace std;

main(){
    int n , freq = 0, sum, a, b, c;

    cin >> n;

    for(int i = 0; i < n; i++){
        sum = 0;
        cin>> a >> b >> c;
        sum = a + b + c;

        if(sum > 1) freq++;
    }

    cout<<freq<<"\n";

    return 0;
}
