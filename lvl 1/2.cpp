#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[100][100];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]!=0)
            {
               cout<<abs(i-2)+abs(j-2)<<endl;

            }
        }
    }
    return 0;
}
