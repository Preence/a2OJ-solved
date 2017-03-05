#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if((n%i)==0)
        {
            return false;
        }

    }
    return true;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int x=n+1;
    while(!isprime(x))
    {
        x++;
    }
   cout<<(x==m?"YES":"NO")<<endl;

        return 0;

}

