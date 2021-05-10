#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k,cou=0,cmp=0,cmt=0,cmg=0,l=0;
    scanf("%d",&n);

    pair<int,string> a[n];
    int n1,n2,n3;

    pair<int,int> piz[n];
    pair<int,int> tx[n];
    pair<int,int> grl[n];

    int maxg=0,maxt=0,maxp=0;
    for(i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        l+=a[i].first;
        piz[i].second=i;
        tx[i].second=i;
        grl[i].second=i;

        int girl=0,taxi=0,pizza=0;
        for(j=0;j<a[i].first;j++){
            scanf("%d-%d-%d",&n1,&n2,&n3);
            if((n1==n2)&&(n2==n3)) {
                if((n1/10)==(n1%10))taxi++;
                else girl++;
            }
            else if((n1>n2&&n2>n3)&&((n1/10)>(n1%10))&&((n2/10)>(n2%10))&&((n3/10)>(n3%10))) pizza++;
            else girl++;
        }
        maxt=max(maxt,taxi);
        maxp=max(maxp,pizza);
        maxg=max(maxg,girl);

        piz[i].first=pizza;
        tx[i].first=taxi;
        grl[i].first=girl;
    }
    sort(tx,tx+n);
    sort(piz,piz+n);
    sort(grl,grl+n);
    if(l==0||n==1) {i=j=k=0;}
    else{
    for(i=n-2;i>-1;i--){
        if(tx[i].first<tx[n-1].first) {i++;break; }
    }
    for(j=n-2;j>-1;j--){
        if(piz[j].first<piz[n-1].first) {j++;break;}
    }
    for(k=n-2;k>-1;k--){
        if(grl[k].first<grl[n-1].first) {k++;break;}
    }
    }
    if(l==0) ;

    cout<< "If you want to call a taxi, you should call: ";

    for(;i<n;i++){
        cout<< a[tx[i].second].second;
        if(i==n-1) cout<<"."<<"\n";
        else cout<<", ";
    }
    cout<<"If you want to order a pizza, you should call: ";
    for(;j<n;j++){
        cout<< a[piz[j].second].second;
        if(j==n-1) cout<<"."<<"\n";
        else cout<<", ";
    }
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for(;k<n;k++){
        cout<< a[grl[k].second].second;
        if(k==n-1) cout<<"."<<"\n";
        else cout<<", ";
    }

    return 0;
}
