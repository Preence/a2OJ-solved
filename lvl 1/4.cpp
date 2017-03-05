#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1=0,num2=0,num3=0;
    string s;
    cin>>s;

for(int i=0;i<s.size();i++){
        if(s[i]=='.')
            {
                num1=0;
                cout<<num1;
            }
        else if(s[i]=='-'&& s[i+1]=='.')
            {
                num2=1;
                cout<<num2;
                i++;
            }
       else if(s[i]=='-'&& s[i+1]=='-')

            {
                num3=2;
                cout<<num3;
                i++;
            }

}
return 0;
}


