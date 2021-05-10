#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,dblodd=0,left=0,right=0;
    cin>>n;

    for(int i=0;i<n;i++){
            scanf("%d %d",&x,&y);
            if(x%2==1&&y%2==1) dblodd++;
            if(x%2==1) left++;
            if(y%2==1) right++;
    }
        cout<<dblodd<<" "<<left<<" " <<right<<endl;
    left=left-dblodd;
    right=right-dblodd;

    if(((left+right)%2)!=0) cout<<-1<< endl;
    else{
        if(left%2==0&&(left+right)%2==0){
          if(dblodd%2==0) cout<<0<<endl;
          else cout<<1<<endl;
        }
        else if(left%2==1&&(left+right)%2==0)
        { if(dblodd%2==0) cout<<1<<endl;
        else cout<<0<<endl;
    }
    }


    return 0;
}
