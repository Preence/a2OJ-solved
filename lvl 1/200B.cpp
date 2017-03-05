#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double arr[100],s=0,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        s+=arr[i];

    }

 printf("%.12lf",s/n);
}
