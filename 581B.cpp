#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,sc,mx=0;
    cin>>n;
    vector<int> h;
    vector<int> pr;
    for(i=0;i<n;i++){
        scanf("%d",&sc);
        h.push_back(sc);
    }
    int l=h.size()-1;
    mx=h[l];
    int p;
    for(i=l;i>-1;--i){
        mx=max(mx,h[i]);
        if(mx==h[i]) { pr.push_back(0); }
        else {
         p = mx-h[i]+1;
         pr.push_back(p);
    }
    }
    for(i=l;i>0;i--){
        printf("%d ",pr[i]);
    }
    printf("%d\n",pr[i]);
    return 0;
}
/*
    bool comp(const pair<int,int>& lhs, const pair<int,int>& rhs)
{
	return lhs < rhs ;
}
    int n,sc,mx=0,flg=0,j;
    scanf("%d",&n);
    vector<int> h;
    pair<int,int> ii;
    vector<pair<int,int> > test;
    int i;

    for(i=0;i<n;i++){
        scanf("%d",&sc);
        h.push_back(sc);
        if(mx>sc){
            test.push_back(make_pair(mx,i-1));
            mx=sc;
        }
        else mx=sc;
    }
    test.push_back(make_pair(mx,i-1));
    int l=test.size();
    sort(test.begin(),test.end());
    if(l==5){
        n=n-1;
        for(i=0;i<n;i++){ printf("0 ");}
        printf("0");
    }
    else if(l==1){
        n=n-1;
        for(i=0;i<n;i++){
            printf("%d ",test[0].first-h[i]+1);
        }
        printf("0");
    }
    else{
    for(i=0;i<n;i++){

    int id=lower_bound(test.begin(),test.end(),make_pair(h[i],0),comp)-test.begin();

        for(j=id;j<l;j++){
            if((h[i]<test[j].first)&&test[j].second>i){
//                cout<<"id for "<<h[i]<<" is :"<<id<<endl;
                printf("%d",test[j].first-h[i]+1);
                break;
            }
            else if(h[i]==test[j].first&&test[j].second==i){
                printf("0");
            }
        }
        if(i!=n-1) cout<<" ";
    }
    }
    printf("\n");
    return 0;
}
*/
