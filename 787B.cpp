#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,i,j,k,inp;
    bool flag;

    cin>>n>>m;
    int posarr[n+1]={0};
    int negarr[n+1]={0};

    for(int i=0;i<m;i++){
        flag = false;
        cin>>k;
        int posarr[n+1]={0};
        int negarr[n+1]={0};
        if(k==1){
            cout<<"YES\n";
            return 0;
        }

        for(j=0;j<k;j++){
            cin>>inp;

            if (inp>0){
                posarr[inp]=1;
            }

            else {
                inp = abs(inp);
                negarr[inp]=1;
            }
            if(posarr[inp]==negarr[inp]){
                flag = true;
            }

            if(j==k-1 && flag == false){
                cout<<"YES\n";
            return 0;
            }
        }
    }
    if(flag == true){
        cout<<"NO";
    }

    return 0;
}
