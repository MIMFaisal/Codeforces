#include <bits/stdc++.h>
using namespace std;

int main()
{
    int no_of_queries;
    cin>>no_of_queries;

    const int MAX_N = 1e5 + 15;
    vector <int> last_multiple_index(MAX_N, 0);

    for(int i = 1; i <= no_of_queries; i++)
    {
        int x, y;
        cin>>x>>y;

        int last_index = i - y;
        int divisors = 0, bad_divisors = 0;

        for(int d = 1; d*d <= x; d++)
        {
            if(x%d == 0)
            {
                divisors += (d*d == x ? 1 : 2);

                if(last_multiple_index[d] >= last_index)
                {
                    bad_divisors++;
                }

                if(d*d != x && last_multiple_index[x/d] >= last_index)
                {
                    bad_divisors++;
                }

                last_multiple_index[d] = last_multiple_index[x/d] = i;
            }
        }

        cout<<divisors - bad_divisors;
    }

    return 0;
}
