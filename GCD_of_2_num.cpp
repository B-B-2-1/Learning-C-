#include<bits/stdc++.h>

using namespace std;

int GCD(int a,int b)
{
    if(b%a == 0)return a;

    return GCD(b%a,a);
    
}

int main()
{
    //cout<<GCD(124,36);
    int a = 24,b = 58;
    cout<<(b%a);
    return 0;

}