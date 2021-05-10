#include<bits/stdc++.h>
using namespace std;

int main()
{
	int r,y,g,b,R,B,Y,G;
	string s;

    r=b=g=y=0;
    cin>>s;

    for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                R=i;
            }
            if(s[i]=='B'){
                B=i;
            }
            if(s[i]=='G'){
                G=i;
            }
            if(s[i]=='Y'){
                Y=i;
            }
        }
        R=R%4;
        B=B%4;
        Y=Y%4;
        G=G%4;
        for(int i=0;i<s.size();i++){
            if(s[i]=='!'){
                if(i%4==R)
                    r++;
                else if(i%4==B)
                    b++;
                else if(i%4==G)
                    g++;
                else if(i%4==Y)
                    y++;
            }
        }
        cout<<r<<" "<<b<<" "<<y<<" "<<g<<endl;
    return 0;
}
