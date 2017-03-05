#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    char s[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<=strlen(s);i++)
    {
        if(s[i]==s[i-1])
            cnt++;


    }
    cout<<cnt<<endl;
return 0;
}
