#include <bits/stdc++.h>
using namespace std;

main(){
    int n, k , t;
    float convertT;

    cin>>n>>k>>t;

    convertT = (float(t)/100)*(n*k);

    convertT = int(convertT);

    for(int i = 1;i < n;i++){
        if(convertT<k){
            cout<<convertT<<" ";
            convertT = 0;
        }

        else if((convertT-k)>= k){
            cout<<k<<" ";
            convertT = convertT-k;
        }
        else{
            cout<<k << " ";
            convertT = convertT-k;
        }
    }
    cout<<convertT<<"\n";

}
