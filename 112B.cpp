#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,x,y;
    cin>>n>>x>>y;
	int tx=n/2,ty=n/2;
	if((x==tx||x==tx+1)&&(y==ty||y==ty+1))
		cout<<"NO";
	else
		cout<<"YES";

	return 0;
}

