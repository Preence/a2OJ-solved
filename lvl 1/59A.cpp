#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str;
    int cnt1=0,cnt2=0, i;
    char c;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=97&&str[i]<=122)
            cnt1++;
        if(str[i]>=65&&str[i]<=90)
            cnt2++;
    }
   if(cnt1>cnt2)
    {
    for(int j=0;j<str.size();j++)
    {
        str[j]=tolower(str[j]);

    }
    cout<<str<<endl;

    }
    else if(cnt1==cnt2)
    {
         for(int j=0;j<str.size();j++)
    {
        str[j]=tolower(str[j]);

    }
    cout<<str<<endl;

    }
    else
    {
      for(int k=0;k<str.size();k++)
    {
        str[k]=toupper(str[k]);

    }
    cout<<str<<endl;
    }
}
