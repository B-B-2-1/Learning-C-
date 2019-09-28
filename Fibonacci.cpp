#include<bits/stdc++.h>

using namespace std;

int Generate_fibonacci(int n)
{
    int fir = 1;
    int sec = 1;
    cout<<fir<<", "<<sec;
    for(int i = 0;i<n-2;i++)
    {
        fir = fir+sec;
        cout<<", "<<fir;
        i++;
        if(i==n)return fir;
        sec = sec+fir;
        cout<<", "<<sec;
    }
    cout<<endl;
    return sec;
}
int main()
{
    Generate_fibonacci(9);
    return 0;
}