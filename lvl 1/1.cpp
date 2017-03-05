#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,x,y,z,sol1=0,sol2=0,sol3=0;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        cin>>x>>y>>z;
        sol1+=x;
        sol2+=y;
        sol3+=z;

    }
    if(sol1!=0||sol2!=0||sol3!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
