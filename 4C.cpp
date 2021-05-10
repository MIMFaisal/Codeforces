#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    map <string, int> user;

    for(int i=0;i<n;i++){
        cin>>s;
        if(user.count(s)==0){
            cout<<"OK"<<endl;
            user[s]=1;
        }
        else{
            cout<<s<<user[s]<<endl;
            user[s]++;
        }
    }
    return 0;
}
