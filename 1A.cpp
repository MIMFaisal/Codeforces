#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long a, n, m, b, c;
    cin >> n >> m >> a;

    b = n/a;
    c = m/a;

    if(n % a != 0) b++;
    if(m % a != 0) c++;

    cout << b * c << "\n";

    return 0;
}
