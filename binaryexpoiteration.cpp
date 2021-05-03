#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin>> x >> n;
    int result=1;
    while(n>0)
    {
        if( n & 1)
        {
            result*=x;
        }
        x*=x;
        n>>= 1;
    }
    cout<< result << endl;
}
