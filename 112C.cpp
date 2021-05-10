#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum_limit;
    long long square_sum_lower_bound;
    cin>>n>>square_sum_lower_bound>>sum_limit;

    long long largest_element = sum_limit - (n - 1);
    long long max_square_sum = (n - 1) + largest_element*largest_element;

    if(max_square_sum < square_sum_lower_bound || n > sum_limit)
    {
        cout<<"-1\n";
        return 0;
    }

    for(int i = 1; i <= n; i++){
        if(i==n){
            cout<<largest_element<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
    }
    return 0;
}
