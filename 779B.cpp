#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    int n,count=0;
    int k;
    string a,b;

    cin>>a>>k;

    for(i=a.length()-1;i>=0;i--)
    {
        if(k<=0)
            break;

       if(a[i]=='0')
            k--;

        else
            count++;
    }

    if(k<=0)
        cout<<count;
    else
        cout<<(a.length()-1);

    return 0;
}