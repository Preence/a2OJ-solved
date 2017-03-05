#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100][100]={0};
    int x=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>x;
            arr[i][j]+=x;
            if(i>0)
                arr[i-1][j]+=x;
            if(j>0)
                arr[i][j-1]+=x;
                if(i<3)
                    arr[i+1][j]+=x;
                if(j<3)
                arr[i][j+1]+=x;

        }
    }
    for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
         {
             if(arr[i][j]%2==1)
             {
                 arr[i][j]=0;
             }
             else{
                arr[i][j]=1;
             }
            cout<<arr[i][j];
         }
        cout<<endl;
    }

return 0;

}
