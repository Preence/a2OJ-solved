#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x1,x2,x;
    cin>>x1>>x2;
    for(int i=0;i<x1.size();i++)
    {
        if(x1[i]==x2[i])
        x1[i]='0';
        else
        x1[i]='1';

    }
    cout<<x1<<endl;
}
