#include <bits/stdc++.h>
using namespace std;


int detection (int n, int i) {
    if (i&1)
    {
        int x=(i>>1)+1;
        return x;
    }
    else if(n&1)
    {
           int y=(n>>1)+detection((n>>1)+1,(i>>1)+1);
           return y;
    }
    else
    {
        int z=(n>>1)+detection((n>>1),(i>>1));
        return z;
    }
}
int main() {
        int N,i;
    int Test;
    cin>>Test;

    while (Test--)
    {
        cin>>N>>i;
        cout<<detection(N,i)<<endl;
    }
    return 0;
}
