
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ar;
    int n,t,len;

    cin>>n>>t>>ar;
while(t--)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[j]=='G'&&ar[j-1]=='B')
               {
                ar[j]='B';
                ar[j-1]='G';
                j++;
               }

        }
    }
    cout<<ar<<endl;

}

