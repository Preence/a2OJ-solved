#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin>>x;
    for(int i=0;i<x.size();i++)
    {
        if(x[0]>=97 &&x[0]<=122)
        {
            x[0]-=32;
        }

    }
    cout<<x<<endl;
}
