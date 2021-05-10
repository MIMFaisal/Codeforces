#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n,i,c=0,mini,val;
    cin>>n;

    long long int a[n+1];

    for(i = 0; i < n; i++){
        cin>>a[i];
    }

    sort(a,a+n);

    mini = abs(a[0]-a[1]);
    for(i = 0; i < n-1; i++){
        val = abs(a[i]-a[i+1]);
        if(val == mini){
            c++;
            continue;
        }
        if(mini>val){
            mini = val;
            c = 1;
        }
    }
    cout <<mini<<" "<<c<<endl;


return 0;
}
