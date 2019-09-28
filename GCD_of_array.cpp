#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    if(b%a == 0)return a;

    return GCD(b%a,a);
    
}
int main()
{
    int arr[] = {24,36,72,56,76};
    int c = arr[0];
    for(int i = 1;i<(sizeof(arr)/sizeof(int));i++)
    {
        c = GCD(c,arr[i]);
    }
    cout<<c;
    return 0;
}