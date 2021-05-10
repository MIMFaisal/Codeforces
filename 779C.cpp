#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,n,k,sum_cur=0,min_sum=0,q=0,sum_next=0,negsum=0,k_cnt=0,ans;

    scanf("%I64d %I64d ",&n,&k);

    pair <long long int, long long int> a[n];
    pair <long long int, long long int> dif[n];

    for(i=0;i<n;i++){
        scanf("%I64d",&a[i].first);
        sum_cur+=a[i].first;
    }

    for(i=0;i<n;i++){
        scanf("%I64d",&a[i].second);
        sum_next+=a[i].second;
        if(a[i].first<=a[i].second)
        {
            min_sum+=a[i].first;
            negsum+=a[i].second;
            k_cnt++;
        }
        else if(a[i].first>a[i].second){
            dif[q].first=a[i].first-a[i].second;
            dif[q].second=i;
            q++;
        }
    }

    if(n==k)
    {
        ans = sum_cur;
    }
    else if(k_cnt>=k)
    {
        ans = min_sum + (sum_next-negsum);
    }
    else if(k_cnt<k){
        sort(dif,dif+q);

        for(i=0;i<q;i++){
            min_sum=min_sum+a[dif[i].second].first;
            negsum=negsum+a[dif[i].second].second;
            k_cnt++;
            if(k_cnt==k) break;
        }
        ans = min_sum + (sum_next - negsum);
    }
    printf("%I64d\n",ans);

    return 0;
}
