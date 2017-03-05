#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,test,knights;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        cin>>m>>n;
        int mn=m*n;
        if(m==1||n==1)
        {
            knights=mn;
        }
        else if(m==2||n==2)
            {
                int mx=max(m,n);
                int x=mx%4;
                if(x!=0)
                    {
                      mx+=(x&1)?1:2;
                    }
                    knights=mx;
            }
        else if(mn%2==0)
           {
               knights=mn/2;
           }
        else
            {
                knights=1+mn/2;
            }
            cout<<"Case no "<<i<<": "<<knights<<endl;

    }

}
