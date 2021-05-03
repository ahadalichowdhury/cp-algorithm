#include<bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    if(n==0)//this is the base case
    {
        return 1;
    }
    int result =power(x, n/2);
    if(n & 1)
    {
        return x * result * result; 
    }
    return result * result;

}

int main ()
{
    int n, x;
    cin>> x >> n;
    cout<< power(x, n)<< endl;
    return 0;

    
}
