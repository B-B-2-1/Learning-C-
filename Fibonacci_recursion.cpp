#include<bits/stdc++.h>
using namespace std;

int fib_rec(int n)
{
    if(n<=2)return 1;

    int ret = fib_rec(n-1) + fib_rec(n-2);
    return ret;
}
int main()
{
    cout<<fib_rec(9);
    return 0;
}